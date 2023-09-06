/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:49:36 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 15:56:28 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const AnimalA* meta = new AnimalA();
	const AnimalA* j = new Dog();
	const AnimalA* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	// meta->makeSound();

	// delete meta;
	delete j;
	delete i;
	
	return 0;
}