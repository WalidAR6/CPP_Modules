/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:06:42 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/20 22:34:33 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->clones[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & obj)
{
    *this = obj;
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
            clones[i] = NULL;
        }
        if (this->clones[i])
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
        if (clones[i] && clones[i]->getType() == type)
            return (clones[i]->clone());
    }
    return (NULL);
}
