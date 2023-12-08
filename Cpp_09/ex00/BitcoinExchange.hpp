/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:14:52 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/08 02:18:07 by waraissi         ###   ########.fr       */
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
        std::ifstream infile;
        std::map<std::string, std::string> map;

        DataWrapper(const DataWrapper & obj);
        DataWrapper &operator=(const DataWrapper & obj);
    public:
        DataWrapper(char *inf);
        ~DataWrapper();

        void fill_map();
        void printMap();
        
};

#endif