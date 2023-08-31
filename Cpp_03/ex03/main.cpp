/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 00:43:05 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/31 00:22:59 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
	// ScavTrap a("walid");
	// ClapTrap s("okokoo");

	// s.attack("walid");
	// a.attack("okok");
	// a.takeDamage(4);
	// std::cout << a.getHitPoint() << std::endl;
	// a.beRepaired(4);
	// std::cout << a.getHitPoint() << std::endl;
	FragTrap s("walid");
	s.highfives();
}