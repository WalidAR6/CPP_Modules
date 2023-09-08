/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 23:28:54 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/08 13:21:16 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
    this->name = name;
    this->slots[0] = NULL;
    this->slots[1] = NULL;
    this->slots[2] = NULL;
    this->slots[3] = NULL;
}

Character::Character(const Character & obj)
{
    this->name = obj.name;
    for (int i = 0; i < 4; i++)
    {
        this->slots[i] = obj.slots[i]->clone();
    }
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
            this->slots[i] = obj.slots[i]->clone();
        }
        else
            this->slots[i] = obj.slots[i]->clone();
    }
    return (*this);
}

Character::~Character()
{
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
            break;
        }
    }
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
        if (i == idx)
        {
            slots[i]->use(target);
            break;
        }
    }
}



