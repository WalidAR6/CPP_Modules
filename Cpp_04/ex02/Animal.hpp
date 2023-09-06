/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:18:20 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 15:53:46 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLY_H
# define POLY_H

# include <iostream>

class AnimalA
{
	protected:
		std::string type;
	public:
		AnimalA();
		AnimalA(std::string type);
		AnimalA(const AnimalA & obj);
		AnimalA & operator=(const AnimalA & obj);
		virtual ~AnimalA();

		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif