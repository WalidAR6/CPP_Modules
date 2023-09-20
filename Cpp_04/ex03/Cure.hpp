/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:39:48 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/20 20:22:34 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure & obj);
        Cure & operator=(const Cure & obj);
        ~Cure();

        Cure* clone() const;
        void use(ICharacter& target);
};

#endif