/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 00:43:05 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/02 17:12:36 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("walid");
	DiamondTrap b("okkk");

	a.attack("okkk");
	b.takeDamage(20);

	std::cout << a.getHitPoint() << std::endl;
	std::cout << a.getEnergyPoint() << std::endl;
	
	std::cout << b.getHitPoint() << std::endl;
}