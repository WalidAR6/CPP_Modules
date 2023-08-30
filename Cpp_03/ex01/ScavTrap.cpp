/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:16:08 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/30 23:27:43 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
} 

ScavTrap::ScavTrap(std::string name):ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << name << " constructer called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & obj)
{
	*this = obj;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & obj)
{
	if (this != &obj)
	{
		name = obj.getName();
		hitPoint = obj.getHitPoint();
		energyPoint = obj.getEnergyPoint();
		attackDamage = obj.getAttackDamage();
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " destracted" << std::endl;
}

void ScavTrap::attack(const std::string & target)
{
	if (hitPoint > 0 && energyPoint > 0)
	{
		std::cout << "ScavTrap " << name << " attack " << target << ", causing " << attackDamage << " point of damage!" << std::endl;
	}
	else
	{
		std::cout << "you have no point to attack!" << std::endl;
		return ;
	}
	energyPoint -= 1;
}

void ScavTrap::guardGate()
{
	std::cout << "The ScavTrap " << getName() << " is now in gate keeper mode" << std::endl;
}
