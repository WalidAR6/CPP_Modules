/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 00:57:31 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/05 18:53:30 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain & obj);
		~Brain();

		Brain & operator=(const Brain & obj);
};

#endif