/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:09:20 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/19 21:02:29 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"
#include <ctime>
#include <iomanip>
#include <sys/_types/_clock_t.h>
#include <sys/_types/_time_t.h>

void    vector_(clock_t &start, clock_t &end, int ac, char **av)
{
    start = clock();
    for (int idx = 1; idx < ac; idx++) {
        int i = idx - 1;
        vec.push_back(convert(av[idx]));
        if (vec.size() % 2 == 0 && i > 0) {
            if (vec[i - 1] < vec[i])
                swap(vec[i - 1], vec[i]);
        }
        i++;
    }
    std::cout << "Before : ";
    printVec();
    if (vec.size() % 2 != 0) {
        PmergeMe::strugler = *vec.rbegin();
        vec.erase(vec.begin() + vec.size() - 1);
    }
    startSorting_v();
    end = clock();
    std::cout << "\nAfter  : ";
    printVec();
    std::cout << "\n";
}

void    deque_(clock_t &start, clock_t &end, int ac, char **av)
{
    start = clock();
    for (int idx = 1; idx < ac; idx++) {
        int i = idx - 1;
        deq.push_back(convert(av[idx]));
        if (deq.size() % 2 == 0 && i > 0) {
            if (deq[i - 1] < deq[i])
                swap(deq[i - 1], deq[i]);
        }
        i++;
    }
    if (deq.size() % 2 != 0) {
        PmergeMe::strugler = *deq.rbegin();
        deq.erase(deq.begin() + deq.size() - 1);
    }
    startSorting_d();
    end = clock();
}

int main(int ac, char **av)
{
    clock_t start_v, end_v;
    clock_t start_d, end_d;
    if (ac == 1)
        return (std::cerr << "Error" << std::endl, 0);
    vector_(start_v, end_v, ac, av);
    deque_(start_d, end_d, ac, av);
    double res_v = ((double)end_v - start_v) / 1000000;
    double res_d = ((double)end_d - start_d) / 1000000;
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector<int> : " << std::fixed << std::setprecision(5) << res_v << " us" << std::endl;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque<int>  : " << std::fixed << std::setprecision(5) << res_d << " us" << std::endl;
}