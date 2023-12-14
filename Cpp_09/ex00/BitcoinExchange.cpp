/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:14:50 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/14 01:13:06 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"
# include <_ctype.h>
# include <_stdio.h>
# include <_types/_intmax_t.h>
# include <algorithm>
# include <climits>
# include <cstddef>
# include <cstdio>
# include <cstring>
# include <fstream>
# include <iostream>
# include <locale>
# include <map>
# include <ostream>
# include <sstream>
# include <stdexcept>
# include <string>
# include <sys/_types/_size_t.h>
# include <utility>
# include <valarray>

std::map<std::string, double> DataWrapper::map;

DataWrapper::DataWrapper(std::string inf) : fileName(inf)
{
    if (fileName.fail())
        throw std::runtime_error("Error: could not open file.");
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

    return val;
}

void DataWrapper::fillMap()
{
    std::string line;
    std::ifstream data("data.csv");
    if (data.fail())
        throw std::runtime_error("Error: could not open file.");
    std::string key;
    double value;
    while (true)
    {
        std::getline(data, line);
        key = line.substr(0, line.find(','));
        if (key != "date" && !key.empty())
            value = std::stod(line.substr(line.find(',') + 1, line.size()));
        insert(key, value);
        if (data.eof())
            break;
    }
    data.close();
}

void DataWrapper::insert(std::string key, double value)
{
    if (key != "date")
        map.insert(std::pair<std::string, double>(key, value));
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
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}

int valuesValidator(Date &date, std::string &subline, int sign, int count)
{
    if (count == 1) {
        if (subline.size() != 4 || !is_all_degit(subline))
            return -1;
        date.year = subline;
    } else if (count == 2) {
        if (convert<int>(subline) > 12 || convert<int>(subline) == 0)
            return -1;
        date.month = subline;
    } else if (count == 3) {
        int mounth = convert<int>(date.month);
        int day = convert<int>(subline);
        if (mounth == 1 || mounth == 3 || mounth == 5 || mounth == 7 || mounth == 8 || mounth == 10 || mounth == 12) {
            if (day > 31 || day == 0)
                return -1;
        } else if (mounth == 2) {
            if (convert<int>(date.year) % 4 || convert<int>(date.year) % 400 != convert<int>(date.year) % 100) {
                if (convert<int>(subline) > 28)
                    return -1;
            }
        } else {
            if (day > 30 || day == 0)
                return -1;
        } 
        date.day = subline;
    } else if (count == 4) {
        if (!is_all_degit(subline) && !(subline.find(".") < subline.size()))
            return -1;
        if (sign)
            return -2;
        if (convert<long>(subline) > 1000)
            return -3;
        date.value = subline;
    }
    return 0;
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
            if (*(tmp + 1) == '-')
                *sign = 1;
        }
        tmp = strtok(NULL, "| ");
    }
    if (count != 2)
    {
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
        return value * 47115.93;
    return value * lwrbnd->second;
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
            if (val == -2)
                std::cerr << "Error : not a positive number." << std::endl;
            else if (val == -3)
                std::cerr << "Error : too large number." << std::endl;
            else if (val == -1)
                std::cerr << "Error : bad input => " << line << std::endl;
            else
                std::cout << date.year << "-" << date.month << "-" << date.day << " => " << date.value << " = " << multiply_(date, map) << std::endl;
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
        std::getline(fileName, line);
        if (line.empty())
            continue;   
        parseDateValues(line, date, map);
        if (fileName.eof())
            break;
    }
}

