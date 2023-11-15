/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:39:01 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/15 14:56:17 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_H
# define SCALAR_CONVERTER_H

#include <iostream>
#include <ostream>

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter & obj);
        ScalarConverter &operator=(const ScalarConverter & obj);
        ~ScalarConverter();

        static void convert(std::string str);
};

#endif