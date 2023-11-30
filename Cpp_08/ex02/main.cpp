/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 01:09:47 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/30 18:58:06 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutanStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "stack top ==> " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "stack size ==> " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    std::cout << *it << std::endl;
    --it;
    std::cout << *it << std::endl;
    std::cout << "printing stack: " << std::endl;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}