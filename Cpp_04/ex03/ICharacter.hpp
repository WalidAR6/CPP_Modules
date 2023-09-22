/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:37:05 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 17:58:03 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_CHAR_H
# define I_CHAR_H

#include "AMateria.hpp"

class AMateria;
class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0; 
};

#endif