/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:18:20 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 19:37:29 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLY_H
# define POLY_H

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal & obj);
		Animal & operator=(const Animal & obj);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const;
};

#endif