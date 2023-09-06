/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:11:13 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 15:54:24 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AnimalA
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog & obj);
		Dog & operator=(const Dog & obj);
		~Dog();

		virtual void makeSound() const;
};

#endif