/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:39:23 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 17:28:16 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria : Default constructor called" << std::endl;
    type = "Amateria";
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria : Parametrized constructor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria & obj)
{
    std::cout << "AMateria : Copy constructor called" << std::endl;
    *this = obj;
}

AMateria &AMateria::operator=(const AMateria & obj)
{
    if (this == &obj)
        return (*this);

    this->type = obj.getType();
    return (*this);
}

AMateria::~AMateria(){std::cout << "AMateria : Destructor called" << std::endl;}

std::string const & AMateria::getType() const
{
    return (type);    
}

std::ostream & operator<<(std::ostream & i, const ICharacter & obj)
{
    i <<  obj.getName();
    return (i);
}

void AMateria::use(ICharacter& target)
{
    (void)target;    
}