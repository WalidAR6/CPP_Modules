/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:09:14 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/20 11:55:15 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data *ptr = new Data();
    std::cout << std::hex << ptr << std::endl;
    uintptr_t i = Serializer::serialize(ptr);
    std::cout << i << std::endl;
    std::cout << Serializer::deserialize(i) << std::endl;
    delete ptr;
}