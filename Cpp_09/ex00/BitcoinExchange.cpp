/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:14:50 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/11 01:35:29 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"
# include <_stdio.h>
# include <cstddef>
# include <cstdio>
# include <cstring>
# include <fstream>
#include <iostream>
# include <map>
# include <stdexcept>
# include <string>
#include <sys/_types/_size_t.h>
# include <utility>

std::map<std::string, std::string> DataWrapper::map;

DataWrapper::DataWrapper(std::string inf) : fileName(inf)
{
    if (fileName.fail())
        throw std::runtime_error("Error: could not open file.");
    fill_map();
}

DataWrapper::~DataWrapper()
{
    fileName.close();
}

void DataWrapper::fill_map()
{
    std::string line;
    std::ifstream data("data.csv");
    if (data.fail())
        throw std::runtime_error("Error: could not open file.");
    std::string key;
    std::string value;
    while (true)
    {
        std::getline(data, line);
        key = line.substr(0, line.find(','));
        value = line.substr(line.find(',') + 1, line.size());
        insert(key, value);
        if (data.eof())
            break;
    }
    data.close();
}

void DataWrapper::insert(std::string key, std::string value)
{
    if (key != "date")
        map.insert(std::pair<std::string, std::string>(key, value));
}

void DataWrapper::inputHandler()
{
    std::string line;
    
    std::getline(fileName, line);
    parseFirstLine(line);
    while (true)
    {
        std::getline(fileName, line);    
        parseDateValues(line);
        if (fileName.eof())
            break;
    }
}

void DataWrapper::parseFirstLine(std::string &line)
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
            tmp = strtok(NULL, "| ");
        }
        if (count != 2)
            throw std::runtime_error("Error : bad input");
        return ;
    }
    throw std::runtime_error("Error : bad input");
}

void DataWrapper::parseDateValues(std::string &line)
{
    std::cout << line << std::endl;
}

void DataWrapper::printMap()
{
    std::map<std::string, std::string>::iterator it;
    for (it = map.begin(); it != map.end(); it++)
        std::cout << it->first << " = " << it->second << std::endl;
}
