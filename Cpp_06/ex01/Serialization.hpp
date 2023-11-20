/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:09:16 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/19 20:17:54 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_H
# define SERIALIZATION_H

#include <iostream>

struct Data
{
    int a;
    int b;
};

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer & obj);
        Serializer &operator=(const Serializer & obj);
        ~Serializer();
    public:
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};


#endif