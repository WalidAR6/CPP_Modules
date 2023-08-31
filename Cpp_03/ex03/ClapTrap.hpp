/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 00:43:03 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/30 23:21:45 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int hitPoint;
	int energyPoint;
	int attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(std::string name, int hitPoint, int energyPoint, int attackDamage);
	ClapTrap(const ClapTrap & obj);
	ClapTrap & operator=(const ClapTrap & obj);
	~ClapTrap();

	void setEnergyPoint(int energyPoint);
	
	std::string getName() const;
	int getHitPoint() const;
	int getEnergyPoint() const;
	int getAttackDamage() const;

	void attack(const std::string & target);
	void takeDamage(unsigned int amout);
	void beRepaired(unsigned int amout);
};

#endif