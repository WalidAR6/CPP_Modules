/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:47:31 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/12 05:17:37 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include "Form.hpp"
#include <iostream>

class Form;
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
        void signForm(Form & obj);
};

std::ostream &operator<<(std::ostream &i, const Bureaucrat & obj);

#endif