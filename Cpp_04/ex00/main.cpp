/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:49:36 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/20 20:07:54 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
	
	std::cout << "============================" << std::endl;
	
	const WrongAnimal* ok = new WrongAnimal();
	const WrongAnimal* ow = new WrongCat();
	
	std::cout << ow->getType() << " " << std::endl;
	ow->makeSound();
	ok->makeSound();
	
	delete ok;
	delete ow;
	
	return 0;
}