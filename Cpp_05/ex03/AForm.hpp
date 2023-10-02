/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:11:44 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/02 20:24:16 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        bool indicator;
        const int signGrade;
        const int execGrade;
    public:
        AForm();
        AForm(std::string name, int signGrade, int execGrade);
        AForm(const AForm & obj);
        AForm & operator=(const AForm & obj);
        virtual ~AForm();
        
        const std::string getName() const;
        bool getIndicator() const;
        const int & getSignGrade() const;
        const int & getExecGrade() const;
        void beSigned(const Bureaucrat & b);
        virtual void execute(Bureaucrat const & executor) const = 0;
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

std::ostream &operator<<(std::ostream &i, const AForm & obj);

#endif