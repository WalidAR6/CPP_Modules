/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:46:18 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 13:03:42 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice"){std::cout << "Ice : Default constructor called" << std::endl;}

Ice::Ice(const Ice & obj)
{
    std::cout << "Ice : Copy constructor called" << std::endl;
    *this = obj;
}

Ice &Ice::operator=(const Ice & obj)
{
    if (this == &obj)
        return (*this);

    return (*this);
}

Ice::~Ice(){std::cout << "Ice : Destructor called" << std::endl;}

Ice* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter & target)
{
    std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}
