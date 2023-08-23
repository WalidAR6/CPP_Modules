/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 01:42:55 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/22 01:50:18 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
    private:
        int raw;
        static int const n;
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed & operator = (const Fixed &copy);
        ~Fixed();

        void        setRawBits(int const raw);
        int getRawBits() const;
};

#endif
