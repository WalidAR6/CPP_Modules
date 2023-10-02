/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:33:12 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/02 16:46:53 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBO_REQ_FORM
# define ROBO_REQ_FORM

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm & obj);
        RobotomyRequestForm & operator=(const RobotomyRequestForm & obj);
        ~RobotomyRequestForm();
        
        void execute(Bureaucrat const & executor) const;
};

#endif