/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:22:28 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/23 20:00:01 by waraissi         ###   ########.fr       */
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
        Fixed(const int raw);
        Fixed(const float raw);
        Fixed(const Fixed &copy);
        Fixed & operator = (const Fixed &copy);
        ~Fixed();

        void setRawBits(int const raw);
        int getRawBits() const;
        float toFloat() const; // convert the fixed point value into a floating point
        int toInt() const; //convert the fixed point value to an int point
};

std::ostream & operator<<(std::ostream & i, const Fixed & obj);

#endif
