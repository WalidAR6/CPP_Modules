/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:58:21 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/12 14:06:46 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), indicator(false), signGrade(1), execGrade(1)
{
    std::cout << "Form: Default constructor called" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : name(name), indicator(false), signGrade(signGrade), execGrade(execGrade)
{
    std::cout << "Form: Parametrized constructor called" << std::endl;
    if (this->signGrade <= 0 || this->execGrade <= 0)
        throw GradeTooHighException();
    if (this->signGrade > 150 || this->execGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form & obj) : name(obj.name), signGrade(obj.signGrade), execGrade(obj.execGrade)
{
    *this = obj;
}

Form & Form::operator=(const Form & obj)
{
    if (this == &obj)
        return *this;
    this->indicator = obj.indicator;
    return *this;
}

Form::~Form()
{
    std::cout << "Form: Destructor called" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("GRADE TOO HIGH");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("GRADE TOO LOW");
}

const std::string Form::getName() const
{
    return (this->name);    
}

bool Form::getIndicator() const
{
    return (this->indicator);
}

const int & Form::getSignGrade() const
{
    return (this->signGrade);
}

const int & Form::getExecGrade() const
{
    return (this->execGrade);
}

void Form::beSigned(const Bureaucrat & obj)
{
    if (obj.getGrade() > signGrade)
        throw GradeTooLowException();
    this->indicator = true;
}

std::ostream &operator<<(std::ostream &i, const Form &obj)
{
    i << "Form name       => " << obj.getName() << std::endl;
    i << "State indicator => " << obj.getIndicator() << std::endl;
    i << "Signed grade    => " << obj.getSignGrade() << std::endl;
    i << "Executed grade  => " << obj.getExecGrade() << std::endl;
    return (i);
}