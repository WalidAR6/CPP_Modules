/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:09:07 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/25 01:49:42 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int>    PmergeMe::jacob;
std::vector<int>    PmergeMe::mainVec;
std::vector<int>    PmergeMe::pendVec;
std::deque<int>     PmergeMe::maindeq;
std::deque<int>     PmergeMe::penddeq;
int                 PmergeMe::strugler = -1;

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

//VECTOR SORT
void    insertSort_v(size_t size)
{
    if (size <= 1)
        return ;

    insertSort_v(size - 1);
    
    if (size % 2 != 0)
        return ;

    int res = vec[size];
    int j = size - 2;
    
    while (j >= 0 && vec[j] > res)
    {
        swap(vec[j + 2], vec[j]);
        swap(vec[j + 3], vec[j + 1]);
        j -= 2;
    }
}

void    pendToSecVec_v()
{
    int i = 0;
    std::vector<int>::iterator it;
    if (vec.size() < 2)
        return ;
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
    if (!PendVec.size())
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
        while ((size_t)res > PendVec.size())
            res--;
        if (std::find(PmergeMe::jacob.begin(), PmergeMe::jacob.end(), res) == PmergeMe::jacob.end())
            PmergeMe::jacob.push_back(res);
        res--;
        while (std::find(PmergeMe::jacob.begin(), PmergeMe::jacob.end(), res) == PmergeMe::jacob.end() && res != 0)
        {
            PmergeMe::jacob.push_back(res);
            res--;
        }
        if ((size_t)tmp > PendVec.size())
            break;
    }
}

void    last_sort_v()
{
    int value;
    for (size_t idx = 0; idx < PmergeMe::jacob.size(); idx++)
    {
        value = PendVec.at(PmergeMe::jacob[idx] - 1);
        vec.insert(std::lower_bound(vec.begin(),vec.end(), value), value);
    }
    if (PmergeMe::strugler >= 0)
        vec.insert(std::lower_bound(vec.begin(),vec.end(), PmergeMe::strugler),PmergeMe::strugler);
}

void    startSorting_v()
{
    insertSort_v(vec.size() - 1);
    if (vec.size() > 1)
        swap(vec[0], vec[1]);
    pendToSecVec_v();
    fill_jacob_sequence_v();
    last_sort_v();
}


//DEQUE SORT
void    insertSort_d(size_t size)
{
    if (size <= 1)
        return ;

    insertSort_v(size - 1);
    
    if (size % 2 != 0)
        return ;

    int res = deq[size];
    int j = size - 2;
    
    while (j >= 0 && deq[j] > res)
    {
        swap(deq[j + 2], deq[j]);
        swap(deq[j + 3], deq[j + 1]);
        j -= 2;
    }
}

void    pendToSecVec_d()
{
    int i = 0;
    std::deque<int>::iterator it;
    if (vec.size() < 2)
        return ;
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
    insertSort_d(deq.size() - 1);
    if (deq.size() > 1)
        swap(deq[0], deq[1]);
    pendToSecVec_d();
    fill_jacob_sequence_d();
    last_sort_d();
}

void    printVec()
{
    std::vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
}

void    printDeq()
{
    std::deque<int>::iterator it;
    for (it = deq.begin(); it != deq.end(); it++)
        std::cout << *it << " ";
}
