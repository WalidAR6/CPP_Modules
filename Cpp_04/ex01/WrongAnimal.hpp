/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:17:31 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 11:20:43 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

#include <iostream>

class WrongAnimal
{
    protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal & obj);
		WrongAnimal & operator=(const WrongAnimal & obj);
		~WrongAnimal();

		std::string getType() const;
		void makeSound();
};

#endif