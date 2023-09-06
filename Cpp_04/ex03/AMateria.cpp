/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:39:23 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 22:28:51 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria & obj)
{
    *this = obj;
}

AMateria &AMateria::operator=(const AMateria & obj)
{
    this->type = obj.getType();
    return (*this);
}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const
{
    return (type);    
}

// void AMateria::use(ICharacter& target)
// {
    
// }