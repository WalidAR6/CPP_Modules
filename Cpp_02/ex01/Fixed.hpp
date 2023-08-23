/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:22:28 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/22 02:22:31 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
    private:
        std::string name;
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed & operator = (const Fixed &copy);
        ~Fixed();

        void        setName(std::string name);
        std::string getName();
};

#endif
