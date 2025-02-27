/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:31:37 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/24 20:01:02 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

std::stack<int> RPN::stack;

int     convert(char c)
{
    std::stringstream ss;
    int num;
    
    ss << c;
    ss >> num;
    return (ss.clear(), num);
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
            if (val1 == 0)
                std::cerr << "Deviding by zero!!!" << std::endl;
                exit(1);
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
    while (tmp != NULL) {
        if (strlen(tmp) >= 2 || (!isdigit(*tmp) && !strchr("+-/*", *tmp))) {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
        else if (isdigit(*tmp))
            RPN::stack.push(convert(*tmp));
        if (strchr("+-/*", *tmp)) {
            if (RPN::stack.size() < 2) {
                std::cerr << "Error" << std::endl;
                exit(1);
            }
            res = stackOperation(*tmp);
            RPN::stack.push(res);
        }
        tmp = strtok(NULL, " ");
    }
    if (RPN::stack.empty()) {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
    return RPN::stack.top();
}
