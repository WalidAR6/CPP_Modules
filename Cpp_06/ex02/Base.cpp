/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:09:39 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/21 13:37:56 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::~Base(){}

Base *Base::generate(void)
{
    std::srand(time(NULL));
    int random_number = std::rand() % 3;

    if (random_number == 0)
        return new A();
    if (random_number == 1)
        return new B();
    return new C();
}

void Base::identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "Type A" << std::endl;
    if (dynamic_cast<B *>(p))
        std::cout << "Type B" << std::endl;
    if (dynamic_cast<C *>(p))
        std::cout << "Type C" << std::endl;
}

void Base::identify(Base &p)
{
    try{
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "Type A" << std::endl;
    } catch ( ... ){}
    try{
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "Type B" << std::endl;
    } catch ( ... ){}
    try{
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "Type C" << std::endl;
    } catch ( ... ){}
}

