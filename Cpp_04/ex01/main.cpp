/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:49:36 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 19:37:23 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "--------------------------------" << std::endl;
	
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << "--------------------------------" << std::endl;

	const Animal *arr[10];

	for (int i = 0; i < 5 ; i++)
	{
		arr[i] = cat;
	}
	for (int y = 5; y < 10 ; y++)
	{
		arr[y] = dog;
	}

	arr[5]->makeSound();

	std::cout << "--------------------------------" << std::endl;
	
	delete dog;
	delete cat;
	
	return 0;
}