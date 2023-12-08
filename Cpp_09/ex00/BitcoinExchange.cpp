/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:14:50 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/08 02:16:42 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"
# include <map>
# include <string>
# include <utility>

DataWrapper::DataWrapper(char *inf) : infile(inf)
{
    if (infile.fail())
        throw std::runtime_error("CAN'T OPEN THE INPUT FILE");
}

DataWrapper::~DataWrapper()
{
    infile.close();
}

void DataWrapper::fill_map()
{
    std::string line;
    std::ifstream data("data.csv");
    if (data.fail())
        throw std::runtime_error("CAN'T OPEN THE DATA FILE");
    
    std::string key;
    std::string value;
    
    while (true)
    {
        std::getline(data, line);
        key = line.substr(0, line.find(','));
        value = line.substr(line.find(',') + 1, line.size());
        map.insert(std::pair<std::string, std::string>(key, value));
        if (data.eof())
            break;
    }
    data.close();
}

void DataWrapper::printMap()
{
    std::map<std::string, std::string>::iterator it;
    for (it = map.begin(); it != map.end(); it++)
        std::cout << it->first << " = " << it->second << std::endl;
}