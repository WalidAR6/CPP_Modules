/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:46:12 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/25 02:26:43 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

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

        /*COMPARISON OVERLOAD*/
        bool operator==(const Fixed & obj)const;
        bool operator!=(const Fixed & obj)const;
        bool operator>(const Fixed & obj)const;
        bool operator<(const Fixed & obj)const;
        bool operator>=(const Fixed & obj)const;
        bool operator<=(const Fixed & obj)const;

        /*ARETHMETIC OVERLOAD*/
        Fixed operator+(const Fixed & obj)const;
        Fixed operator-(const Fixed & obj)const;
        Fixed operator*(const Fixed & obj)const;
        Fixed operator/(const Fixed & obj)const;

        /*INCREMENT DECREMENT OVERLOAD*/
        Fixed & operator++();//++a
        Fixed & operator--();//--a
        Fixed operator++(int);//a++
        Fixed operator--(int);//a--

        /*MIN MAX*/
        static Fixed & min(Fixed & obj1, Fixed & obj2);
        static Fixed const & min(const Fixed & obj1, const Fixed & obj2);

        static Fixed & max(Fixed & obj1, Fixed & obj2);
        static const Fixed & max(Fixed const & obj1, Fixed const & obj2);
        
};

std::ostream & operator<<(std::ostream & i, const Fixed & obj);

#endif
