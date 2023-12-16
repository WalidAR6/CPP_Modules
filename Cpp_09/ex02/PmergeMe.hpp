/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:08:23 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/16 19:34:21 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include <deque>
# include <iostream>
# include <vector>

# define vec PmergeMe::mainVec
class PmergeMe
{
    private:
        PmergeMe();
        PmergeMe(const PmergeMe & obj);
        PmergeMe & operator=(const PmergeMe & obj);
        ~PmergeMe();
    public:
        static int strugler;
        static std::vector<int> mainVec;
        static std::deque<int>  maindeq;
};

int     convert(std::string arg);
void    startSorting();
void    printVec();

#endif