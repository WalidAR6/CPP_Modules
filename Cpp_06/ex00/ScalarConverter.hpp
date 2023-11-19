/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:39:01 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/19 19:18:56 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_H
# define SCALAR_CONVERTER_H

#include <iostream>
#include <sstream>
#include <iomanip>
#include <ostream>
class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter & obj);
        ScalarConverter &operator=(const ScalarConverter & obj);
        ~ScalarConverter();
    public:

        static void convert(std::string str);
};

#endif