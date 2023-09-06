/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:04:18 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 15:54:28 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public AnimalA
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat & obj);
		Cat & operator=(const Cat & obj);
		~Cat();

		virtual void makeSound() const;
};

#endif