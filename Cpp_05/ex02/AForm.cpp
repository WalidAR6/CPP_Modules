/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:58:21 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/09 12:49:55 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default"), indicator(false), signGrade(1), execGrade(1)
{
    std::cout << "AForm: Default constructor called" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : name(name), indicator(false), signGrade(signGrade), execGrade(execGrade)
{
    std::cout << "AForm: Parametrized constructor called" << std::endl;
    if (this->signGrade <= 0 || this->execGrade <= 0)
        throw GradeTooHighException();
    if (this->signGrade > 150 || this->execGrade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm & obj) : name(obj.name), signGrade(obj.signGrade), execGrade(obj.execGrade)
{
    *this = obj;
}

AForm & AForm::operator=(const AForm & obj)
{
    if (this == &obj)
        return *this;
    this->indicator = obj.indicator;
    return *this;
}

AForm::~AForm()
{
    std::cout << "AForm: Destructor called" << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("GRADE TOO HIGH");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("GRADE TOO LOW");
}

const std::string AForm::getName() const
{
    return (this->name);    
}

bool AForm::getIndicator() const
{
    return (this->indicator);
}

const int & AForm::getSignGrade() const
{
    return (this->signGrade);
}

const int & AForm::getExecGrade() const
{
    return (this->execGrade);
}

void AForm::beSigned(const Bureaucrat & obj)
{
    if (obj.getGrade() <= signGrade)
        this->indicator = true;
    try
    {
        if (obj.getGrade() > signGrade)
            throw GradeTooLowException();
    }
    catch (std::exception & e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &i, const AForm &obj)
{
    i << "AForm name       => " << obj.getName() << std::endl;
    i << "State indicator => " << obj.getIndicator() << std::endl;
    i << "Signed grade    => " << obj.getSignGrade() << std::endl;
    i << "Executed grade  => " << obj.getExecGrade() << std::endl;
    return (i);
}