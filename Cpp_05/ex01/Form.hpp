/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:11:44 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/02 14:25:31 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool indicator;
        const int signGrade;
        const int execGrade;
    public:
        Form();
        Form(std::string name, int signGrade, int execGrade);
        Form(const Form & obj);
        Form & operator=(const Form & obj);
        ~Form();
        
        const std::string getName() const;
        bool getIndicator() const;
        const int & getSignGrade() const;
        const int & getExecGrade() const;
        void beSigned(const Bureaucrat & b);
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
};

std::ostream &operator<<(std::ostream &i, const Form & obj);

#endif