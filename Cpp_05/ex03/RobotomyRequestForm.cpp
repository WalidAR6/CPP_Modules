/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:33:10 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/02 20:06:08 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request", 72, 45), target("default")
{
    std::cout << "RobotomyRequest: Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy request", 72, 45), target(target)
{
    std::cout << "RobotomyRequest: Parametrized constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & obj) : AForm("robotomy request", 72, 45)
{
    std::cout << "RobotomyRequest: Copy constructor called" << std::endl;
    *this = obj;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & obj)
{
    if (this == &obj)
        return (*this);
    this->target = obj.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequest: Destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (executor.getGrade() > 0 || getIndicator() == false)
            throw "The robotomy failed";
        std::cout << "That " << target << "has been robotomized successfully 50% of the time" << std::endl;
    }
    catch (const std::string & e)
    {
        std::cout << e <<  std::endl;
    }
}