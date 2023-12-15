/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:31:37 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/15 01:09:24 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"
#include <_ctype.h>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <stack>
#include <string.h>
#include <sys/_types/_size_t.h>

std::stack<int> RPN::stack;

int     convert(char c)
{
    std::stringstream ss;
    int num;
    
    ss << c;
    ss >> num;
    return num;
}

int     stackOperation(char c)
{

    int val1 = RPN::stack.top();
    RPN::stack.pop();
    int val2 = RPN::stack.top();
    RPN::stack.pop();
    switch (c) {
        case '+':
            return (val1 + val2);
        case '-':
            return (val2 - val1);
        case '/':
            return (val2 / val1);
        case '*':
            return (val1 * val2);
    }
    return (-1);
}

int     reverseNotation(std::string arg)
{
    int     res = 0;
    char    *tmp = strtok((char *)arg.c_str(), " ");
    while (tmp != NULL)
    {
        if (isdigit(*tmp))
            RPN::stack.push(convert(*tmp));
        else if (strchr("+-/*", *tmp)) {
            if (RPN::stack.size() < 2)
                std::cerr << "Error" << std::endl, std::exit(1);
            res = stackOperation(*tmp);
            RPN::stack.push(res);
        }
        tmp = strtok(NULL, " ");
    }
    if (RPN::stack.size() != 1)
        std::cerr << "Error" << std::endl, std::exit(1);
    return RPN::stack.top();
}
