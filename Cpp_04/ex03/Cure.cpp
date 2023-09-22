/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:42:50 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 19:11:03 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure"){std::cout << "Cure : Default constructor called" << std::endl;}

Cure::Cure(const Cure & obj)
{
    std::cout << "Cure : Copy constructor called" << std::endl;
    *this = obj;
}

Cure & Cure::operator=(const Cure & obj)
{
    if (this == &obj)
        return (*this);

    return (*this);
}

Cure::~Cure(){std::cout << "Cure : Destructor called" << std::endl;}

Cure* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter & target)
{
    std::cout << "* heals " << target << "'s wounds *" << std::endl;
}