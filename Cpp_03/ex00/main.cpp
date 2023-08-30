/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 00:43:05 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/30 21:26:18 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("walid");
	ClapTrap b("lwjdi");

	a.attack("lwjdi");
	b.takeDamage(1);

	std::cout << "walid's energy points " << a.getEnergyPoint() << std::endl;
	std::cout << "lwjdi's health " << b.getHitPoint() << std::endl;

	b.beRepaired(2);

	std::cout << "walid's energy points " << a.getEnergyPoint() << std::endl;
	std::cout << "lwjdi's health " << b.getHitPoint() << std::endl;

}