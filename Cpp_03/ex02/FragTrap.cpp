/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:35:51 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/31 00:26:19 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << name << " constructer called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & obj)
{
	*this = obj;
}

FragTrap & FragTrap::operator=(const FragTrap & obj)
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " destracted" << std::endl;
}

void FragTrap::attack(const std::string & target)
{
	if (hitPoint > 0 && energyPoint > 0)
	{
		std::cout << "FragTrap " << name << " attack " << target << ", causing " << attackDamage << " point of damage!" << std::endl;
	}
	else
	{
		std::cout << "you have no point to attack!" << std::endl;
		return ;
	}
	energyPoint -= 1;
}

void FragTrap::highfives()
{
	std::cout << "You seek a drop of good news, and your Lord desires to bestow upon you rain." << std::endl;
}
