/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:58:46 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/09 12:43:27 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cstdio>
#include <ostream>

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(1)
{
    std::cout << "Bureaucrat: Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    std::cout << "Bureaucrat: Parametrized constructor called" << std::endl;
    if (grade <= 0)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj) : name(obj.name)
{
    std::cout << "Bureaucrat: Copy constructor called" << std::endl;
    *this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat & obj)
{
    if (this == &obj)
        return (*this);
    this->grade = obj.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat: Destructor called" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("GRADE TOO HIGH");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("GRADE TOO LOW");
}

const std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::incGrade()
{
    if (grade - 1 <= 0)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decGrade()
{
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}

std::ostream &operator<<(std::ostream &i, const Bureaucrat & obj)
{
    i << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return (i);
}

void Bureaucrat::signForm(const AForm & obj)
{
    if (obj.getIndicator() == true)
        std::cout << this->name << " signed " << obj.getName() << std::endl;
    if (obj.getIndicator() == false)
        std::cout << this->name << " couldn't sign " << obj.getName() << " because grade isn't to low." << std::endl;;
}

void Bureaucrat::executeForm(AForm const & form)
{
    if (form.getIndicator() == true && grade <= 0)
        form.execute(*this);
    else
        std::cout << "can't execute the form" << std::endl;
}