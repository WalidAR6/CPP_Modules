/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 00:43:00 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/30 21:24:44 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string name): name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " is constarcted" << std::endl;
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
	return (name);
}

int ClapTrap::getAttackDamage() const
{
	return (attackDamage);
}

int ClapTrap::getEnergyPoint() const
{
	return (energyPoint);
}

int ClapTrap::getHitPoint() const
{
	return (hitPoint);
}

void ClapTrap::attack(const std::string & target)
{
	if (hitPoint > 0 && energyPoint > 0)
	{
		std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attackDamage << " point of damage!" << std::endl;
	}
	else
	{
		std::cout << "you have no point to attack!" << std::endl;
		return ;
	}
	energyPoint -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " toke " << amount << " amount of damage" << std::endl;
	hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoint > 0 && energyPoint > 0)
	{
			hitPoint += amount;
	}
	else
	{
		std::cout << "you have no point to be repaired!" << std::endl;
		return ;
	}
	energyPoint -= 1;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destracted" << std::endl;
}
