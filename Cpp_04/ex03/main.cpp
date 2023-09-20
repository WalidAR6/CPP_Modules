/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:39:14 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/20 21:36:33 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void ff(){
    system("leaks Materia");
}

int main()
{
    atexit(ff);
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;



    // MateriaSource *m = new MateriaSource();
    // MateriaSource *m1 = new MateriaSource();

    // m->learnMateria(new Ice());

    // *m = *m1;

    // delete m1;
    // delete m;

    
    

    // Character *m2 = new Character("a");// default const.
    // Character *b = new Character("b");// default const.
    // m2->equip(new Ice());
    // m2->use(2, *b);
    
    // *m2 = *b;

    // delete m2;
    // delete b;

    return 0;
}