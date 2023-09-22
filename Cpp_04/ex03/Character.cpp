/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 23:28:54 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 13:00:10 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <cstddef>
#include <ostream>

Character::Character()
{
    std::cout << "Charatcter: Default constructor called" << std::endl;
    this->name = "default";
    for (int i = 0; i < 4; i++)
        this->slots[i] = NULL;
}

Character::Character(std::string name)
{
    std::cout << "Character: Parametrized constructor called" << std::endl;
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->slots[i] = NULL;
}

Character::Character(const Character & obj)
{
    std::cout << "Character: copy constructor called" << std::endl;
    *this = obj;
}

Character & Character::operator=(const Character & obj)
{
    if (this == &obj)
        return (*this);

    this->name = obj.name;
    for (int i = 0; i < 4; i++)
    {
        if (this->slots[i] != NULL)
        {
            delete slots[i];
            slots[i] = NULL;
        }
        if (obj.slots[i])
            this->slots[i] = obj.slots[i]->clone();
    }
    return (*this);
}

Character::~Character()
{
    std::cout << "Character: Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete slots[i];
    }
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria  *a)
{   
    for (int i = 0; i < 4; i++)
    {
        if (slots[i] == NULL)
        {
            slots[i] = a;
            return ;
        }
    }
    delete a; 
}

void Character::unequip(int idx)
{
    for (int i = 0; i < 4; i++)
    {
        if (i == idx)
        {
            slots[i] = NULL;
            break;
        }
    }
}

void Character::use(int idx, ICharacter &target)
{
    for (int i = 0; i < 4; i++)
    {
        if (i == idx && slots[i])
        {
            slots[i]->use(target);
            break;
        }
    }
}



