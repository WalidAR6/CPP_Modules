/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:29:45 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/22 00:08:08 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<  std::endl;
		return (0);
	}
	while (av[i])
	{
		std::string str = av[i];
		j = 0;
		while (str[j])
		{
			std::cout << (char)std::toupper(str[j]);
			j++;
		}
		i++;
	}
	std::cout << "" << std::endl;
	return (0);
}