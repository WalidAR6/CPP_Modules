/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:33:07 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/02 16:38:32 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRES_PARDON_FORM
# define PRES_PARDON_FORM

# include "AForm.hpp"

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

        void execute(Bureaucrat const & executor) const;
};

# endif