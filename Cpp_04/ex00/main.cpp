/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:49:36 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 11:26:40 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	meta->makeSound();

	WrongAnimal* ok = new WrongAnimal();
	WrongAnimal* ow = new WrongCat();
	
	std::cout << ow->getType() << " " << std::endl;
	ow->makeSound();
	ok->makeSound();

	
	delete meta;
	delete j;
	delete i;
	
	return 0;
}