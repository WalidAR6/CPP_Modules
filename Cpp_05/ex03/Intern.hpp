/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:15:19 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/02 20:04:00 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H


#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern & obj);
        Intern &operator=(const Intern & obj);
        ~Intern();

        AForm *makeForm(std::string formName, std::string target);
};

#endif