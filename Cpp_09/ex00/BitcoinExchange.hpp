/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:14:52 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/23 18:23:25 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_H
# define BITCOIN_EXCHANGE_H

# include <fstream>
# include <iostream>
# include <map>
# include <exception>
# include <sstream>
# include <cstring>

struct Date {
    std::string year;
    std::string month;
    std::string day;
    std::string value;
};

class DataWrapper
{
    public:
        static std::map<std::string, double> map;
        static std::ifstream fileName;
        
        DataWrapper(std::string inf);
        DataWrapper(const DataWrapper & obj);
        DataWrapper &operator=(const DataWrapper & obj);
        ~DataWrapper();

        void fillMap();
        void inputHandler(Date &date);
};

#endif