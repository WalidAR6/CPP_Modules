/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:35:51 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/17 23:23:40 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap" << name << " is constructed" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << name << " is constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap & obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

FragTrap & FragTrap::operator=(const FragTrap & obj)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	name = obj.getName();
	hitPoint = obj.getHitPoint();
	energyPoint = obj.getEnergyPoint();
	attackDamage = obj.getAttackDamage();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " is destructed" << std::endl;
}

void FragTrap::attack(const std::string & target)
{
	if (hitPoint > 0 && energyPoint > 0)
	{
		std::cout << "FragTrap " << name << " attack " << target << ", causing " << attackDamage << " point of damage!" << std::endl;
		energyPoint -= 1;
		return ;
	}
	if (hitPoint == 0)
		std::cout << "FragTrap " << name << " is dead, he can't attack!" << std::endl;
	else if (energyPoint == 0)
		std::cout << "FragTrap " << name << " has no energy point to be attack!" << std::endl;
}

void FragTrap::highfives()
{
	std::cout << "FragTrap " << name << " has no enemies" << std::endl;
}
