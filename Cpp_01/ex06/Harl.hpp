/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:12:22 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/17 14:14:29 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_F_H
# define HARL_F_H

# include <iostream>

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		void complain( std::string level);
};

#endif