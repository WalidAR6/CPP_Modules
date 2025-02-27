/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:57:20 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/14 13:24:26 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef M_BRAINZ_H
# define M_BRAINZ_H

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		
		void			announce();
		void			set_name(std::string name);
		std::string		get_name() const;
};

Zombie	*zombieHorde(int N, std::string name);	

#endif