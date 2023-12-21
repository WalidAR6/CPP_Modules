/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:14:52 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/21 22:40:29 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_H
# define BITCOIN_EXCHANGE_H

# include <fstream>
# include <iostream>
# include <map>
# include <exception>
# include <sstream>

struct Date {
    std::string year;
    std::string month;
    std::string day;
    std::string value;
};

class DataWrapper
{
    private:
        DataWrapper(const DataWrapper & obj);
        DataWrapper &operator=(const DataWrapper & obj);
    public:
        static std::map<std::string, double> map;
        std::ifstream fileName;
        typedef struct Date  date;
        
        DataWrapper(std::string inf);
        ~DataWrapper();

        void fillMap();
        void insert(std::string key, double value);
        void inputHandler(Date &date);
};

#endif