/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:09:07 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/16 19:34:44 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sstream>
#include <vector>

std::vector<int> PmergeMe::mainVec;

int     convert(std::string arg)
{
    int                 num;
    std::stringstream   ss;

    ss << arg;
    ss >> num;
    return (ss.clear(), num);
}

void    startSorting() {}

void    printVec()
{
    std::vector<int>::iterator it;
    for (it = PmergeMe::mainVec.begin(); it != PmergeMe::mainVec.end(); it++)
        std::cout << *it << std::endl;
}