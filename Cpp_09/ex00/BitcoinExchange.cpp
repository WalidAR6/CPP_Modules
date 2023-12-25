/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:14:50 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/24 19:07:26 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

std::map<std::string, double> DataWrapper::map;

DataWrapper::DataWrapper(std::string inf) : fileName(inf.c_str())
{
    std::stringstream ss;
    ss << fileName.rdbuf();
    if (fileName.fail() || ss.str().empty())
        throw std::runtime_error("Error: could not open file.");
    ss.clear();
    fileName.close();
    fileName.open(inf.c_str());
    fillMap();
}

DataWrapper::~DataWrapper()
{
    fileName.close();
}

template <typename T>
T convert(std::string str)
{
    T val;
    std::stringstream ss;

    ss << str;
    ss >> val;

    return (ss.clear(), val);
}

void DataWrapper::fillMap()
{
    std::string line;
    std::ifstream data("data.csv");
    std::stringstream ss;
    ss << data.rdbuf();
    if (data.fail() || ss.str().empty())
        throw std::runtime_error("Error: could not open file.");
    ss.clear();
    data.close();
    data.open("data.csv");
    std::string key;
    double value;
    while (true)
    {
        if (data.eof())
            break;
        std::getline(data, line);
        key = line.substr(0, line.find(','));
        if (key != "date" && !key.empty())
        {
            value = convert<double>(line.substr(line.find(',') + 1, line.size()));
            map.insert(std::pair<std::string, double>(key, value));
        }
    }
    data.close();
}

void parseFirstLine(std::string &line)
{
    int count = 0;
    char *tmp;
    size_t c_find = line.find('|');
    
    if (c_find == line.rfind('|') && c_find < line.size())
    {
        tmp = strtok((char *)line.c_str(), "| ");
        while (tmp != NULL)
        {
            count++;
            if (strcmp(tmp, "date") && strcmp(tmp, "value"))
                throw std::runtime_error("Error : bad input"); 
            if ((!strcmp(tmp, "date") && count != 1) || (!strcmp(tmp, "value") && count != 2))
                throw std::runtime_error("Error : bad input");
            tmp = strtok(NULL, "| ");
        }
        if (count != 2)
            throw std::runtime_error("Error : bad input"); 
        return ;
    }
    throw std::runtime_error("Error : bad input");
}

int countChar(std::string ele, char c)
{
    int count = 0;
    for (size_t i = 0; i < ele.size(); i++)
    {
        if (ele[i] == c)
            count++;
    }
    return count;
}

int is_all_degit(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if (!isdigit(str[i]) && str[i] != '.')
            return 0;
    }
    return 1;
}

int valuesValidator(Date &date, std::string &subline, int sign, int count)
{
    if (count == 1) {
        if (subline.size() != 4 || !is_all_degit(subline) || convert<int>(subline) < convert<int>(DataWrapper::map.begin()->first.substr(0, 4)))
            return -1;
        date.year = subline;
    } else if (count == 2) {
        if (convert<int>(subline) > 12 || convert<int>(subline) == 0)
            return -1;
        date.month = subline;
    } else if (count == 3) {
        int mounth = convert<int>(date.month);
        int day = convert<int>(subline);
        if (convert<int>(date.year) <= convert<int>(DataWrapper::map.begin()->first.substr(0, 4)) && day < convert<int>(DataWrapper::map.begin()->first.substr(8, 10)))
            return -1;
        if (mounth == 1 || mounth == 3 || mounth == 5 || mounth == 7 || mounth == 8 || mounth == 10 || mounth == 12) {
            if (day > 31 || day == 0)
                return -1;
        } else if (mounth == 2) {
            if (convert<int>(date.year) % 4 || convert<int>(date.year) % 400 != convert<int>(date.year) % 100) {
                if (day > 28)
                    return -1;
            } else {
                if (day > 29 || day == 0)
                    return -1;
            }
        }
        date.day = subline;
    } else if (count == 4) {
        std::string tmp = subline;
        if (subline[subline.size() - 1] == 'f')
            tmp = subline.erase(subline.size() - 1);
        if (subline.at(0) == '+' && tmp.size() > 1)
            tmp = subline.erase(0,1);
        if (!is_all_degit(tmp) || (tmp.find(".") != tmp.rfind(".") && tmp.find(".") < tmp.size()) || tmp.empty() || sign == 2)
            return -1;
        if (sign)
            return -2;
        if (convert<double>(tmp) > 1000)
            return -3;
        date.value = subline;
    }
    return 0;
}

int is_all_zeros(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] != '0')
            return 0;
        i++;
    }
    return 1;
}

int lineComponent(std::string line, int *sign)
{
    char *tmp;
    std::string subline(line);
    int count = 0;

    tmp = strtok((char *)subline.c_str(), "| ");
    while (tmp != NULL)
    {
        count++;
        if (count == 1) {
            if (strlen(tmp) != 10 || countChar(tmp, '-') != 2) {
                std::cerr << "Error : bad input => " << line << std::endl;
                return 0;
            }
        }
        else {
            if (*tmp == '-')
                *sign = 1;
            if ((strlen(tmp) == 1 && *tmp == '-') || strchr(tmp + 1, '-'))
                *sign = 2;
            if (*tmp == '-' && is_all_zeros(tmp + 1))
                *sign = 0;
        }
        tmp = strtok(NULL, "| ");
    }
    if (count != 2 || *sign == 2) {
        std::cerr << "Error : bad input => " << line << std::endl;
        return 0;
    }
    return 1;
}

double multiply_(Date &date, std::map<std::string, double> &map)
{
    double value = convert<double>(date.value);
    
    std::map<std::string, double>::iterator lwrbnd;

    std::string comKey = date.year+"-"+date.month+"-"+date.day;

    lwrbnd = map.lower_bound(comKey);
    
    if (lwrbnd == map.end())
        return value * map.rbegin()->second;

    else if (lwrbnd != map.begin() && lwrbnd->first != comKey)
        lwrbnd--;

    return value * lwrbnd->second;
}

void output(Date &date, std::map<std::string, double> &map, int val, std::string &line)
{
    if (val == -2)
        std::cerr << "Error : not a positive number." << std::endl;
    else if (val == -3)
        std::cerr << "Error : too large number." << std::endl;
    else if (val == -1)
        std::cerr << "Error : bad input => " << line << std::endl;
    else
        std::cout   << date.year    << "-"
                    << date.month   << "-"
                    << date.day     << " => "
                    << date.value   << " = "
                    << multiply_(date, map) << std::endl;
}

void parseDateValues(std::string line, Date &date, std::map<std::string, double> &map)
{
    std::string tm(line);
    int count = 0;
    int sign = 0;
    char *tmp;

    size_t c_find = tm.find('|');
    if (c_find == tm.rfind('|') && c_find < tm.size()) {
        if (lineComponent(line, &sign)) {
            tmp = strtok((char *)tm.c_str(), "-| ");
            int val;
            while (tmp != NULL) {
                count++;
                std::string subline(tmp);
                val = valuesValidator(date, subline, sign, count);
                if (val)
                {
                    date.year = "", date.month = "", date.day = "", date.value = "";
                    break;
                }
                tmp = strtok(NULL, "-| ");
            }
            output(date, map, val, line);
        }
        return ;
    }
    std::cerr << "Error : bad input => " << line << std::endl;
}

void DataWrapper::inputHandler(Date &date)
{
    std::string line;

    std::getline(fileName, line);
    parseFirstLine(line);
    while (true)
    {
        if (fileName.eof())
            break;
        std::getline(fileName, line);
        if (line.empty())
            continue;
        parseDateValues(line, date, map);
    }
}
