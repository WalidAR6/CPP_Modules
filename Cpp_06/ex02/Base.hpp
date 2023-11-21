/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:58:51 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/21 11:57:17 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_H
# define IDENTIFY_H

#include <iostream>

class Base
{
    public:
        virtual ~Base();

        Base *generate(void);
        void identify(Base &p);
        void identify(Base *p);
};

# endif