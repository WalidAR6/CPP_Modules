/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:45:57 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/07 17:05:34 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource & obj);
        MateriaSource& operator=(const MateriaSource & obj);
        ~MateriaSource();
        
        void learnMateria(AMateria *);
        AMateria* createMateria(std::string const & type);
};

#endif