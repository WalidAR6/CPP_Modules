/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 00:43:05 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/17 23:06:02 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a("obm");
	FragTrap b("enemy");

	a.attack("enemy");
	b.takeDamage(a.getAttackDamage());

	std::cout << "obm's energy points " << a.getEnergyPoint() << std::endl;
	std::cout << "enemy's health " << b.getHitPoint() << std::endl;

	b.beRepaired(2);
	a.highfives();

	std::cout << "enemy's energy points " << b.getEnergyPoint() << std::endl;
	std::cout << "enemy's health " << b.getHitPoint() << std::endl;
}