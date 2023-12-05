/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:40:46 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/05 15:56:02 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main()
{
   try
   {
      Span s = Span(15);

      s.addNumber(6);
      s.addNumber(3);
      s.addNumber(17);
      s.addNumber(9);
      s.addNumber(11);
      std::cout << s.shortestSpan() << std::endl;
      std::cout << s.longestSpan() << std::endl;

      std::vector<int> vec1;
      while(vec1.size() < 10)
         vec1.push_back(vec1.size() + 1);
      s.addNumbers<std::vector<int> >(vec1.begin(), vec1.end());
   }
   catch (std::exception & e)
   {
      std::cout << e.what() << std::endl;
   }
}