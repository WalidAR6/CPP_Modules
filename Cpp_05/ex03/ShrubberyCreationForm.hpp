/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:33:17 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/03 16:30:39 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERY_CRE_FORM
# define SHRUBERY_CRE_FORM

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm & obj);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & obj);
        ~ShrubberyCreationForm();

        class ShrubberyCreationException : public std::exception
        {
            public:
                const char * what() const throw();
        };
        void execute(Bureaucrat const & executor) const;
};

#endif