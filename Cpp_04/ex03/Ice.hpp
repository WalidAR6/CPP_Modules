/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:30:51 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 22:36:00 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice & obj);
        Ice& operator=(const Ice & obj);
        ~Ice();

        Ice* clone() const;
        // void use(ICharacter& target);
};

#endif

