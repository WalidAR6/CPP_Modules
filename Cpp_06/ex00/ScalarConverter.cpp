/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:38:57 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/23 19:13:33 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

int geType(std::string &str)
{
    std::string tmp = str.substr(((str.at(0) == '-' || str.at(0) == '+') ? 1 : 0), str.size());
    int isDouble = false;
    int isFloat = false;
    
    if ((str.size() == 3 && str[0] == '\'' && str[2] == '\'') || (str.size() == 1 && !isdigit(str[0])))
    {
        if (str.size() == 3)
            str = str.substr(1, 1);
        return (1);
    }
    else if (is_all_digit(str))
        return (2);
    else if (tmp == "nan" || tmp == "inf" || tmp == "nanf" || tmp == "inff")
    {
        if (str[str.size() - 1] == 'f' && (str[str.size() - 2] == 'f' || str[str.size() - 2] == 'n'))
        {
            str = str.erase(str.size() - 1);
            return (3);
        }
        return (4);
    }
    else if (str.find(".") == str.rfind(".") && str.find(".") < str.size())
    {
        size_t fpos = str.find("f");
        if (fpos == str.size() - 1)
        {
            isFloat = true;
            str = str.erase(fpos);
        }
        if (str.size() == 1 && str[0] == '.')
            return (-1);
        for (size_t i = (str.at(0) == '-' || str.at(0) == '+' ) ? 1 : 0; i < str.size(); i++)
            if (!isdigit(str[i]) && str[i] != '.')
                return (isFloat = false, -1);
        if (!isFloat)
            isDouble = true;
    }
    else
        return (-1);
    return (isFloat * 3 + isDouble * 4);
}

void displayMsg(char c, long i, float f, double d)
{
    if ((i > 127 || i < -127) && !isprint(c))
        std::cout << "char     : Impossible" << std::endl;
    else if (!isprint(i))
        std::cout << "char     : Non displayable" << std::endl;
    else
        std::cout << "char     : " << "'" << c << "'" << std::endl;
    if (i <= 2147483647 && i >= -2147483648)
        std::cout << "int      : " << static_cast<int>(i) << std::endl;
    else
        std::cout << "int      : Impossible" << std::endl;
    std::cout << "float    : " << std::fixed << std::setprecision(1)<< f << "f" << std::endl;
    std::cout << "double   : " << std::fixed << std::setprecision(1)<< d << std::endl;
}

void outputInt(std::string &str)
{
    std::stringstream ss;
    long num;

    ss << str;
    if (!(ss >> num))
    {
        std::cerr << "You passed an invalid range" << std::endl;
        return ;
    }
    displayMsg(static_cast<char>(num), num, static_cast<float>(num), static_cast<double>(num));
    ss.clear();
}

void outputFloat(std::string &str)
{
    std::stringstream ss;
    float num;

    ss << str;
    ss >> num;
    displayMsg(static_cast<char>(num), static_cast<long>(num), num, static_cast<double>(num));
    ss.clear();
}

void outputDouble(std::string &str)
{
    std::stringstream ss;
    double num;
    
    ss << str;
    ss >> num;
    displayMsg(static_cast<char>(num), static_cast<long>(num), static_cast<float>(num), num);
    ss.clear();
}

void ScalarConverter::convert(std::string str)
{
    int type = geType(str);
    if (type == 1)
        displayMsg(str[0], static_cast<int>(str[0]), static_cast<float>(str[0]), static_cast<double>(str[0]));
    else if (type == 2)
        outputInt(str);
    else if (type == 3)
        outputFloat(str);
    else if (type == 4)
        outputDouble(str);
    else
        std::cerr << "Error" << std::endl;
}
