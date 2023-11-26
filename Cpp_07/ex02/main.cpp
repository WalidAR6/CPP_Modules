/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 02:23:26 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/26 22:08:31 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> nums(10); 
    
    try
    {
        Array<int> num(-1);   
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        for (int idx = 0; idx < 10; idx++)
        {
            nums[idx] = idx + 3;
            std::cout << nums[idx] << " ";
        }
        std::cout << std::endl;
        nums[21] = 0;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    {
        Array<int>tmp(nums);
        for (int idx = 0; idx < 10; idx++)
            std::cout << tmp[idx] << " ";
        std::cout << std::endl;
    }
    
}
