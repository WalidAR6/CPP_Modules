/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:42:50 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 22:50:13 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure"){}

Cure::Cure(const Cure & obj)
{
    *this = obj;
}

Cure & Cure::operator=(const Cure & obj)
{
    if (this == &obj)
        return (*this);
    return (*this);
}

Cure::~Cure(){}

Cure* Cure::clone() const
{
    return (new Cure());
}

// void Cure::use(ICharacter & target)
// {
//     std::cout << "* heals " << target << "’s wounds *" << std::endl;
// }