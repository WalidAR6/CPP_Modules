/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:16:08 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/17 22:58:44 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap" << name << " is constructed" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << name << " is constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & obj)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & obj)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	name = obj.getName();
	hitPoint = obj.getHitPoint();
	energyPoint = obj.getEnergyPoint();
	attackDamage = obj.getAttackDamage();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " is destructed" << std::endl;
}

void ScavTrap::attack(const std::string & target)
{
	if (hitPoint > 0 && energyPoint > 0)
	{
		std::cout << "ScavTrap " << name << " attack " << target << ", causing " << attackDamage << " point of damage!" << std::endl;
		energyPoint -= 1;
		return ;
	}
	if (hitPoint == 0)
		std::cout << "ScavTrap " << name << " is dead, he can't attack!" << std::endl;
	else if (energyPoint == 0)
		std::cout << "ScavTrap " << name << " has no energy point to be attack!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "The ScavTrap " << name << " is now in gate keeper mode" << std::endl;
}
