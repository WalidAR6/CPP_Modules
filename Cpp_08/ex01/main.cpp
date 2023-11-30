/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:40:46 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/30 18:50:06 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main()
{
   try
   {
      Span s = Span(10);
      
      Span sp = Span(5);
      s.addNumber(6);
      s.addNumber(3);
      s.addNumber(17);
      s.addNumber(9);
      s.addNumber(11);
      std::cout << s.shortestSpan() << std::endl;
      std::cout << s.longestSpan() << std::endl;

      std::vector<int> vec1(5);
      while(vec1.size() < 5)
         vec1.push_back(vec1.size());
      s.addNumbers<std::vector<int> >(vec1.begin(), vec1.end());
   }
   catch (std::exception & e)
   {
      std::cout << e.what() << std::endl;
   }
}