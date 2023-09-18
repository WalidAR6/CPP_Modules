/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 00:53:58 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/18 01:45:00 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap" << name << " is constructed" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), name(name)
{
	std::cout << "DiamondTrap " << name << " is constructed" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap & obj)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & obj)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
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
	ScavTrap::attack(target);
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