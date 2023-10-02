/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:47:13 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/02 20:46:26 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat bur("walid", 0);

    // ShrubberyCreationForm shr("home");
    // shr.beSigned(bur);
    
    // bur.executeForm(shr);
    
    Intern a;
    (void)a;
    AForm *rr;

    rr = a.makeForm("shrubbery creation", "Bender");

    std::cout << rr->getName() <<  std::endl;
    rr->beSigned(bur);
    rr->execute(bur);
}