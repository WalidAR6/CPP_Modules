/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:50:51 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/14 09:30:23 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie a;
	Zombie b;
	Zombie c;

	Zombie *z = Zombie::newZombie("walid");
	z->announce();
	a.set_name("death");
	b.set_name("brand");
	c.set_name("hello");
	a.announce();
	b.announce();
	c.announce();
	c.randomChump("warwp");
	delete z;
}
