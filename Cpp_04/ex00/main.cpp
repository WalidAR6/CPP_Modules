/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:49:36 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 12:06:44 by waraissi         ###   ########.fr       */
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
	
	i->makeSound() const; //will output the cat sound!
	j->makeSound() const;

	meta->makeSound() const;

	const WrongAnimal* ok = new WrongAnimal();
	const WrongAnimal* ow = new WrongCat();
	
	std::cout << ow->getType() << " " << std::endl;
	ow->makeSound() const;
	ok->makeSound() const;

	
	delete meta;
	delete j;
	delete i;
	
	return 0;
}