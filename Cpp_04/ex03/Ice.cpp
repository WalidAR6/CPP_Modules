/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:46:18 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/07 15:17:22 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice"){}

Ice::Ice(const Ice & obj)
{
    *this = obj;
}

Ice &Ice::operator=(const Ice & obj)
{
    if (this == &obj)
        return (*this);
    return (*this);
}

Ice::~Ice(){}

Ice* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter & target)
{
    std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}
