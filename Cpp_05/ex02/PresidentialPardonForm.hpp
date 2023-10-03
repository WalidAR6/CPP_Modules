/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:33:07 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/03 16:26:27 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRES_PARDON_FORM
# define PRES_PARDON_FORM

# include "AForm.hpp"
#include <exception>

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm & obj);
        PresidentialPardonForm & operator=(const PresidentialPardonForm & obj);
        ~PresidentialPardonForm();

        class NoPardonException : public std::exception
        {
            public:
                const char * what() const throw();
        };
        void execute(Bureaucrat const & executor) const;
};

# endif