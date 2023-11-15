/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:38:57 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/15 21:35:57 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <_ctype.h>
#include <algorithm>
#include <cctype>
#include <filesystem>
#include <iterator>
#include <ostream>
#include <regex>
#include <sys/_types/_size_t.h>

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter Constructed" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter & obj)
{
    *this = obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter & obj)
{
    (void)obj;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructed" << std::endl;
}

int is_all_digit(std::string str)
{
    for (size_t i = (str.at(0) == '-' || str.at(0) == '+' ) ? 1 : 0; i < str.size(); i++)
    {
        if (!isdigit(str[i]))
            return (0);
    }
    return (1);
}

int f_is_last(std::string str)
{
    size_t pos = str.find("f");
    if (pos == str.size() - 1)
        return pos;
    return 0;
}

void ScalarConverter::convert(std::string str)
{
    int isChar = false;
    int isInt = false;
    int isDouble = false;
    int isFloat = false;

    if (str.size() == 1 && !isdigit(str[0]))
    {
        std::cout << "char" << std::endl;
        isChar = true;
    }
    else if (is_all_digit(str))
    {
        std::cout << "int" << std::endl;
        isInt = true;
    }
    else if (str.find(".") == str.rfind(".") && str.find(".") < str.size())
    {
        if (str.find(".") == str.size() - 1)
        {
            std::cout << "error" << std::endl;    
            return ;
        }
        size_t fpos = str.find("f");
        if (fpos == str.size() - 1)
        {
            if (str[0] == 'f' || str[fpos - 1] == '.')
            {
                std::cout << "error" << std::endl;
                return ;
            }
            for (size_t i = (str.at(0) == '-' || str.at(0) == '+' ) ? 1 : 0; i < fpos - 1; i++)
            {
                if (!isdigit(str[i]) && str[i] != '.')
                {
                    std::cout << "error" << std::endl;
                    return ;
                }
            }
            std::cout << "float" << std::endl;
            isFloat = true;
        }
        else if (fpos > str.size() - 1)
        {
            for (size_t i = (str.at(0) == '-' || str.at(0) == '+' ) ? 1 : 0; i < str.size() - 1; i++)
            {
                if (!isdigit(str[i]) && str[i] != '.')
                {
                    std::cout << "error" << std::endl;    
                    return ;
                }
            }
            std::cout << "double" << std::endl;
            isDouble = true;
        }
        else
        {
            std::cout << "error" << std::endl;    
            return ;
        }
    }
    else
    {
        std::cout << "error" << std::endl;    
        return ;
    }
}