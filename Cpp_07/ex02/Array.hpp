/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 02:23:37 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/25 19:21:11 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <exception>
# include <iostream>

template<typename T> class Array
{
    private:
        T *array;
        size_t _size;
    public:
        Array()
        {
            _size = 0;
            array = NULL;
        }
        
        Array(unsigned int n)
        {
            _size = n;
            array = new T[n];
        }
        
        Array(const Array & obj)
        {
            array = NULL;
            *this = obj;
        }
        
        Array &operator=(const Array & obj)
        {
            if (this == &obj)
                return *this;
            if(array)
                delete [] array;
            array = new T[obj._size];
            _size = obj._size;
            for (size_t idx = 0; idx < obj._size; idx++)
                array[idx] = obj.array[idx];
            return *this;
        }

        T &operator[](size_t idx)
        {
            if (idx > size() || idx < 0)
                throw std::runtime_error("out of bound");
            return array[idx];
        }
        
        size_t size() const 
        {   
            return _size;
        }
        
        ~Array()
        {
            delete [] array;
        }
};


#endif