/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 00:43:00 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/17 04:39:40 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("Default"), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " is constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " is constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoint, int energyPoint, int attackDamage): name(name), hitPoint(hitPoint), energyPoint(energyPoint), attackDamage(attackDamage)
{
	std::cout << "ClapTrap " << name << " is constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & obj)
{
	*this = obj;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & obj)
{
	this->name = obj.getName();
	this->attackDamage = obj.getAttackDamage();
	this->hitPoint = obj.getHitPoint();
	this->energyPoint = obj.getEnergyPoint();
	return (*this);
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

int ClapTrap::getAttackDamage() const
{
	return (this->attackDamage);
}

int ClapTrap::getEnergyPoint() const
{
	return (this->energyPoint);
}

int ClapTrap::getHitPoint() const
{
	return (this->hitPoint);
}

void ClapTrap::attack(const std::string & target)
{
	if (hitPoint > 0 && energyPoint > 0)
	{
		std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attackDamage << " point of damage!" << std::endl;
		energyPoint -= 1;
		return ;
	}
	if (hitPoint == 0)
		std::cout << "ClapTrap " << name << " is dead, he can't attack!" << std::endl;
	else if (energyPoint == 0)
		std::cout << "ClapTrap " << name << " has no energy point to be attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " toke " << amount << " amount of damage" << std::endl;
	hitPoint -= amount;
	if (hitPoint <= 0)
	{
		std::cout << "ClapTrap " << name << " is died" << std::endl;
		hitPoint = 0;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoint > 0 && energyPoint > 0)
	{
		std::cout << "ClapTrap " << name << " repaired " << amount << " of here hitPoint" << std::endl;
		hitPoint += amount;
		energyPoint -= 1;
		return ;
	}
	if (hitPoint == 0)
		std::cout << "ClapTrap " << name << " is dead, he can't be repaired!" << std::endl;
	else if (energyPoint == 0)
		std::cout << "ClapTrap " << name << " has no energy point to be repaired!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is destructed" << std::endl;
}
