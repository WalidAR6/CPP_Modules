/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:40:46 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/29 23:34:43 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"
#include <array>
#include <cstdlib>
#include <ctime>
# include <exception>
#include <vector>

int main()
{
   srand(time(NULL));
   Span s = Span(10);
   try
   {
      Span sp = Span(5);
      s.addNumber(6);
      s.addNumber(3);
      s.addNumber(17);
      s.addNumber(9);
      s.addNumber(11);
      std::cout << s.shortestSpan() << std::endl;
      std::cout << s.longestSpan() << std::endl;
   }
   catch (std::exception & e)
   {
      std::cout << e.what() << std::endl;
   }

   try
   {
      std::vector<int> vec1(10);
      while(vec1.size() <= 10)
         vec1.push_back(vec1.size());
      s.addNumbers<std::vector<int>::iterator>(vec1.begin(), vec1.end());
   }
   catch (std::exception & e)
   {
      std::cout << e.what() << std::endl;
   }
}