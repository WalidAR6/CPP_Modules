/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:50:51 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/13 22:54:16 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	// Zombie zombie;
	Zombie *z;

	z = NULL;
	// z = z->newZombie("walid");

	// z->announce();
	z->randomChump("walid");
	delete z;
}
