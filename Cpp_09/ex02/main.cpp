/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:09:20 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/22 22:39:47 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

void    vector_(timeval &tv_start_v, timeval &tv_end_v, int ac, char **av)
{
    gettimeofday(&tv_start_v, NULL);
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
    gettimeofday(&tv_end_v, NULL);
    std::cout << "\nAfter  : ";
    printVec();
    std::cout << "\n";
}

void    deque_(timeval &tv_start_d, timeval &tv_end_d, int ac, char **av)
{
    gettimeofday(&tv_start_d, NULL);
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
    gettimeofday(&tv_end_d, NULL);
}

int main(int ac, char **av)
{
    struct timeval tv_start_v, tv_end_v;
    struct timeval tv_start_d, tv_end_d;
    if (ac == 1)
        return (std::cerr << "Error" << std::endl, 0);
    vector_(tv_start_v, tv_end_v, ac, av);
    deque_(tv_start_d, tv_end_d, ac, av);
    double res_v = (tv_end_v.tv_sec * 1000000 + tv_end_v.tv_usec) - (tv_start_v.tv_sec * 1000000 + tv_start_v.tv_usec);
    double res_d = (tv_end_d.tv_sec * 1000000 + tv_end_d.tv_usec) - (tv_start_d.tv_sec * 1000000 + tv_start_d.tv_usec);
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector<int> : "  << res_v << " us" << std::endl;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque<int>  : "  << res_d << " us" << std::endl;
}