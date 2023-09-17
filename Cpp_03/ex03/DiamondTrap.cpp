/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 00:53:58 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/17 05:05:59 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap" << name << " is constructed" << std::endl;
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), name(name)
{
	std::cout << "DiamondTrap " << name << " is constructed" << std::endl;
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap & obj)
{
	*this = obj;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & obj)
{
	name = obj.getName();
	ClapTrap::name = obj.getName() + "_clap_name";
	hitPoint = obj.getHitPoint();
	energyPoint = obj.getEnergyPoint();
	attackDamage = obj.getAttackDamage();
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
		std::cout << "DiamondTrap " << name << " attack " << target << ", causing " << attackDamage << " point of damage!" << std::endl;
		energyPoint -= 1;
		return ;
	}
	if (hitPoint == 0)
		std::cout << "DiamondTrap " << name << " is dead, he can't attack!" << std::endl;
	else if (energyPoint == 0)
		std::cout << "DiamondTrap " << name << " has no energy point to be attack!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << name << std::endl;
	std::cout << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " is destructed" << std::endl;
}