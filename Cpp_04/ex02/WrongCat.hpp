/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:15:48 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/20 15:47:20 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

#include "WrongAnimal.hpp"
#include "Brain.hpp"
class WrongCat : public WrongAnimal
{
	private:
		Brain* brain;
    public:
		WrongCat();
		WrongCat(const WrongCat & obj);
		WrongCat & operator=(const WrongCat & obj);
		~WrongCat();

		void makeSound() const;
};


#endif