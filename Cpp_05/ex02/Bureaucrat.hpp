/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:47:31 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/11 23:18:15 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include "AForm.hpp"
#include <iostream>

class AForm;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat & obj);
        Bureaucrat & operator=(const Bureaucrat & obj);
        ~Bureaucrat();

        const std::string getName() const;
        int getGrade() const;
        void incGrade();
        void decGrade();
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        void signForm(AForm & obj);
        void executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &i, const Bureaucrat & obj);

#endif