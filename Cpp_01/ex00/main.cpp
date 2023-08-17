/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:50:51 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/14 11:48:58 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie a;
	Zombie b;
	Zombie c;

	Zombie *z = newZombie("walid");
	z->announce();
	a.set_name("death");
	a.announce();
	b.set_name("brand");
	b.announce();
	c.set_name("hello");
	c.announce();
	randomChump("warwp");
	delete z;
}
