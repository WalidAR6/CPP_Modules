/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:14:52 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/11 01:08:23 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_H
# define BITCOIN_EXCHANGE_H

# include <fstream>
# include <iostream>
# include <map>
# include <string>

class DataWrapper
{
    private:
        DataWrapper(const DataWrapper & obj);
        DataWrapper &operator=(const DataWrapper & obj);
    public:
        static std::map<std::string, std::string> map;
        std::ifstream fileName;
        
        DataWrapper(std::string inf);
        ~DataWrapper();

        void fill_map();
        void insert(std::string key, std::string value);
        void inputHandler();
        void parseFirstLine(std::string &line);
        void parseDateValues(std::string &line);
        void printMap();
        
};

#endif