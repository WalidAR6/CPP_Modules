/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:15:58 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/02 20:02:07 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern: Default constructor called" << std::endl;
}

Intern::Intern(const Intern & obj)
{
    std::cout << "Intern: Copy constructor called" << std::endl;
    *this = obj;
}

Intern & Intern::operator=(const Intern & obj)
{
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern: Destructor called" << std::endl;
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    (void)formName;
    (void)target;
    return (NULL);
}