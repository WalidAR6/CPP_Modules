/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:45:57 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/08 19:44:28 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria *clones[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource & obj);
        MateriaSource& operator=(const MateriaSource & obj);
        ~MateriaSource();
        
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const & type);
};

#endif