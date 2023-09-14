/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:12:29 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/13 23:26:28 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac > 2)
		return (1);
	void (Harl::*func)(std::string) = &Harl::complain;
	Harl a;

	(a.*func)(av[1]);
}
