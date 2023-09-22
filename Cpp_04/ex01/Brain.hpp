/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 00:57:31 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 19:37:58 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain & obj);
		Brain & operator=(const Brain & obj);
		~Brain();
};

#endif