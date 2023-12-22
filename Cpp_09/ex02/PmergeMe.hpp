/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:08:23 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/22 22:39:44 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

# include <deque>
# include <iostream>
# include <vector>
# include <sstream>
# include <iomanip>
# include <sys/time.h>


# define vec PmergeMe::mainVec
# define PendVec PmergeMe::pendVec

# define deq PmergeMe::maindeq
# define PendDeq PmergeMe::penddeq
class PmergeMe
{
    private:
        PmergeMe();
        PmergeMe(const PmergeMe & obj);
        PmergeMe & operator=(const PmergeMe & obj);
        ~PmergeMe();
    public:
        static int strugler;
        static std::vector<int> jacob;
        static std::vector<int> mainVec;
        static std::vector<int> pendVec;
        static std::deque<int>  maindeq;
        static std::deque<int>  penddeq;
};

int     convert(std::string arg);
void    swap(int &num1, int &num2);
void    startSorting_v();
void    startSorting_d();
void    printVec();
void    printDeq();

#endif