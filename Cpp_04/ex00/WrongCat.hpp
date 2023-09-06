/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:15:48 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 11:19:46 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
		WrongCat();
		WrongCat(const WrongCat & obj);
		WrongCat & operator=(const WrongCat & obj);
		~WrongCat();

		void makeSound();
};


#endif