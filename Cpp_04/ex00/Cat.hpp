/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:04:18 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/04 20:09:15 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat & obj);
		Cat & operator=(const Cat & obj);
		~Cat();

		void makeSound();
};

#endif