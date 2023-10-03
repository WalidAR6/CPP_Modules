/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:33:04 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/03 16:28:09 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"
#include <exception>

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon", 25, 5), target("default")
{
    std::cout << "PresidentialPardon: Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential pardon", 25, 5), target(target)
{
    std::cout << "PresidentialPardon: Parametrized constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj) : AForm("presidential pardon", 25, 5)
{
    std::cout << "PresidentialPardon: Copy constructor called" << std::endl;
    *this = obj;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & obj)
{
    if (this == &obj)
        return (*this);
    this->target = obj.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardon: Destructor called" << std::endl;
}

const char * PresidentialPardonForm::NoPardonException::what() const throw()
{
    return ("No presidenatial pardon");
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (executor.getGrade() > getExecGrade() || getIndicator() == false)
            throw NoPardonException();
        std::cout << "That " << target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    catch (const std::exception & e)
    {
        std::cout << "Error: " << e.what() <<  std::endl;
    }
}