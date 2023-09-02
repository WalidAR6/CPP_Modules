/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 00:53:58 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/02 17:10:49 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name", 100, 50, 30), name(name)
{
	std::cout << "DiamondTrap " << name << " constructer called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & obj)
{
	*this = obj;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & obj)
{
	if (this != &obj)
	{
		name = obj.getName();
		ClapTrap::name = obj.getName() + "_clap_name";
		hitPoint = obj.getHitPoint();
		energyPoint = obj.getEnergyPoint();
		attackDamage = obj.getAttackDamage();
		
	}
	return (*this);
}

std::string DiamondTrap::getName() const
{
	return (name);
}

void DiamondTrap::attack(const std::string & target)
{
	if (hitPoint > 0 && energyPoint > 0)
	{
		std::cout << "ScavTrap " << name << " attack " << target << ", causing " << ScavTrap::attackDamage << " point of damage!" << std::endl;
	}
	else
	{
		std::cout << "you have no point to attack!" << std::endl;
		return ;
	}
	energyPoint -= 1;
}

void DiamondTrap::whoAmI()
{
	std::cout << name << std::endl;
	std::cout << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamodTrap " << name << " destracted" << std::endl;
}