/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 01:09:47 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/07 02:27:00 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutanStack.hpp"
#include <vector>

int main()
{
    // MutantStack<int> mstack;
    // mstack.push(5);
    // mstack.push(17);
    // std::cout << "stack top ==> " << mstack.top() << std::endl;
    // mstack.pop();
    // std::cout << "stack size ==> " << mstack.size() << std::endl;
    // mstack.push(3);
    // mstack.push(5);
    // mstack.push(737);
    // mstack.push(0);
    // MutantStack<int>::iterator it = mstack.begin();
    // MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    // std::cout << *it << std::endl;
    // --it;
    // std::cout << *it << std::endl;
    // std::cout << "printing stack: " << std::endl;
    // while (it != ite)
    // {
    // std::cout << *it << std::endl;
    // ++it;
    // }
    // std::stack<int> s(mstack);

    {    
        MutantStack<int> mstk;

        mstk.push(5);
        mstk.push(44);
        mstk.push(33);
        mstk.push(22);
        
        for (MutantStack<int>::iterator it = mstk.begin(); it != mstk.end(); it++)
        {
            std::cout << *it << std::endl;
        }
        std::cout << std::endl;
        for (MutantStack<int>::reverse_iterator rit = mstk.rbegin(); rit != mstk.rend(); rit++)
        {
            std::cout << *rit << std::endl;
        }
    }
    
    {
        std::cout << "testing with vector:" << std::endl;
        std::vector<int> vec;
        
        vec.push_back(5);
        vec.push_back(44);
        vec.push_back(33);
        vec.push_back(22);
        
        for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
        {
            std::cout << *it << std::endl;
        }
        std::cout << std::endl;
        for (std::vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); rit++)
        {
            std::cout << *rit << std::endl;
        }
    }
    return 0;
}