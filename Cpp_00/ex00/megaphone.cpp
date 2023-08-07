/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:29:45 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/07 14:19:56 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			std::cout << (char)toupper(av[i][j]);
			j++;
		}
		i++;
	}
	std::cout << "\n";
	return (0);
}