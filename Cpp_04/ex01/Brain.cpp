/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:14:29 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 19:37:53 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "idea";
	}
}

Brain::Brain(const Brain & obj)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = obj;
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain & obj)
{
	if (this == &obj)
		return (*this);

	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = obj.ideas[i];
	}
	return (*this);
}

