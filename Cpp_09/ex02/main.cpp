/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:09:20 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/16 19:34:37 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

void    swap(int &num1, int &num2)
{
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

int main(int ac, char **av)
{
    if (ac == 1)
        return (std::cerr << "Error" << std::endl, 0);

    for (int idx = 1; idx < ac; idx++)
    {
        int i = idx - 1;
        vec.push_back(convert(av[idx]));
        if (vec.size() % 2 == 0 && i > 0)
        {
            if (vec[i - 1] < vec[i])
                swap(vec[i - 1], vec[i]);
        }
        i++;
    }
    printVec();
    startSorting();
}