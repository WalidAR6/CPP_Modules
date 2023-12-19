/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:09:07 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/19 21:07:15 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <cstddef>
#include <deque>
#include <sstream>
#include <sys/_types/_size_t.h>
#include <vector>

std::vector<int>    PmergeMe::jacob;
std::vector<int>    PmergeMe::mainVec;
std::vector<int>    PmergeMe::pendVec;
std::deque<int>     PmergeMe::maindeq;
std::deque<int>     PmergeMe::penddeq;
int                 PmergeMe::strugler;

int     convert(std::string arg)
{
    int                 num;
    std::stringstream   ss;

    ss << arg;
    ss >> num;
    return (ss.clear(), num);
}

void    swap(int &num1, int &num2)
{
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

void    insertSort_v()
{
    int j;
    int res;
    for (size_t idx = 2; idx < vec.size(); idx += 2) {
        res = vec[idx];
        j = idx - 2;
        while (j >= 0 && vec[j] > res) {
            swap(vec[j + 2], vec[j]);
            swap(vec[j + 3], vec[j + 1]);
            j -= 2;
        }
    }
    swap(vec[0], vec[1]);
}

void    pendToSecVec_v()
{
    int i = 0;
    std::vector<int>::iterator it;
    
    for (it = vec.begin() + 2; it != vec.end(); it++, i++) {
        if (i % 2 != 0)
        {
            PendVec.push_back(*it);
            vec.erase(it);
            it--;
        }
    }
}

void    fill_jacob_sequence_v()
{
    if (!PmergeMe::pendVec.size())
        return;
    int num1 = 0;
    int num2 = 1;
    int res;
    while (true)
    {
        res = num2 + 2 * num1;
        int tmp = res;
        num1 = num2;
        num2 = tmp;
        while ((size_t)res > PmergeMe::pendVec.size())
            res--;
        if (std::find(PmergeMe::jacob.begin(), PmergeMe::jacob.end(), res) == PmergeMe::jacob.end())
            PmergeMe::jacob.push_back(res);
        res--;
        while (std::find(PmergeMe::jacob.begin(), PmergeMe::jacob.end(), res) == PmergeMe::jacob.end() && res != 0)
        {
            PmergeMe::jacob.push_back(res);
            res--;
        }
        if ((size_t)tmp > PmergeMe::pendVec.size())
            break;
    }
}

void    last_sort_v()
{
    int value;
    for (size_t idx = 0; idx < PmergeMe::jacob.size(); idx++)
    {
        value = PmergeMe::pendVec.at(PmergeMe::jacob[idx] - 1);
        vec.insert(std::lower_bound(vec.begin(),vec.end(), value), value);
    }
    if (PmergeMe::strugler >= 0)
        vec.insert(std::lower_bound(vec.begin(),vec.end(), PmergeMe::strugler),PmergeMe::strugler);
}

void    startSorting_v()
{
    insertSort_v();
    pendToSecVec_v();
    fill_jacob_sequence_v();
    last_sort_v();
}

void    insertSort_d()
{
    int j;
    int res;
    for (size_t idx = 2; idx < deq.size(); idx += 2) {
        res = deq[idx];
        j = idx - 2;
        while (j >= 0 && deq[j] > res) {
            swap(deq[j + 2], deq[j]);
            swap(deq[j + 3], deq[j + 1]);
            j -= 2;
        }
    }
    swap(deq[0], deq[1]);
}

void    pendToSecVec_d()
{
    int i = 0;
    std::deque<int>::iterator it;
    
    for (it = deq.begin() + 2; it != deq.end(); it++, i++) {
        if (i % 2 != 0)
        {
            PendDeq.push_back(*it);
            deq.erase(it);
            it--;
        }
    }
}

void    fill_jacob_sequence_d()
{
    if (!PendDeq.size())
        return;
    int num1 = 0;
    int num2 = 1;
    int res;
    while (true)
    {
        res = num2 + 2 * num1;
        int tmp = res;
        num1 = num2;
        num2 = tmp;
        while ((size_t)res > PendDeq.size())
            res--;
        if (std::find(PmergeMe::jacob.begin(), PmergeMe::jacob.end(), res) == PmergeMe::jacob.end())
            PmergeMe::jacob.push_back(res);
        res--;
        while (std::find(PmergeMe::jacob.begin(), PmergeMe::jacob.end(), res) == PmergeMe::jacob.end() && res != 0)
        {
            PmergeMe::jacob.push_back(res);
            res--;
        }
        if ((size_t)tmp > PendDeq.size())
            break;
    }
}

void    last_sort_d()
{
    int value;
    for (size_t idx = 0; idx < PmergeMe::jacob.size(); idx++)
    {
        value = PendDeq.at(PmergeMe::jacob[idx] - 1);
        deq.insert(std::lower_bound(deq.begin(),deq.end(), value), value);
    }
    if (PmergeMe::strugler >= 0)
        deq.insert(std::lower_bound(deq.begin(),deq.end(), PmergeMe::strugler),PmergeMe::strugler);
}

void    startSorting_d()
{
    insertSort_d();
    pendToSecVec_d();
    fill_jacob_sequence_d();
    last_sort_d();
}

void    printVec()
{
    std::vector<int>::iterator it;
    for (it = PmergeMe::mainVec.begin(); it != PmergeMe::mainVec.end(); it++)
        std::cout << *it << " ";
}

void    printDeq()
{
    std::deque<int>::iterator it;
    for (it = deq.begin(); it != deq.end(); it++)
        std::cout << *it << " ";
}
