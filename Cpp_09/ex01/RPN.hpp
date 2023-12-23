/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:30:56 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/23 10:15:11 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

# include <iostream>
# include <stack>
# include <sstream>
# include <cstring>
# include <cstdlib>

class RPN
{
    private:
        RPN();
        RPN(const RPN & obj);
        RPN &operator=(const RPN & obj);
        ~RPN();
    public:
        static std::stack<int> stack;
};

int    reverseNotation(std::string arg);

# endif