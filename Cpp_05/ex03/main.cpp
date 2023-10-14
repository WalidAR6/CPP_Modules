/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:47:13 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/09 19:04:14 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat bur("walid", 1);
        Intern a;
        AForm *rr;

        rr = a.makeForm("shrubbery creation", "Bender");

        std::cout << rr->getName() <<  std::endl;
        rr->beSigned(bur);
        rr->execute(bur);
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}