/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:06:42 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/08 19:45:55 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->clones[0] = NULL;
    this->clones[1] = NULL;
    this->clones[2] = NULL;
    this->clones[3] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & obj)
{
    for (int i = 0; i < 4; i++)
    {
        this->clones[i] = obj.clones[i]->clone();
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource & obj)
{
    if (this == &obj)
        return (*this);
    for (int i = 0; i < 4; i++)
    {
        if (this->clones[i] != NULL)
        {
            delete clones[i];
            this->clones[i] = obj.clones[i]->clone();
        }
        else
            this->clones[i] = obj.clones[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete clones[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (clones[i] == NULL)
        {
            clones[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (clones[i]->getType() == type)
            return (clones[i]->clone());
    }
    return (NULL);
}
