/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:33:15 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/02 20:46:10 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137), target("default")
{
    std::cout << "ShrubberyCreation: Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubbery creation", 145, 137), target(target)
{
    std::cout << "ShrubberyCreation: Parametrized constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & obj) : AForm("shrubbery creation", 145, 137)
{
    std::cout << "ShrubberyCreation: Copy constructor called" << std::endl;
    *this = obj;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & obj)
{
    if (this == &obj)
        return (*this);
    this->target = obj.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreation: Destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (executor.getGrade() > 0 || getIndicator() == false)
            throw "No shrubbery availlable";
        std::ofstream infile(target + "_shrubbery");
        infile << "                    .        +          .      .          ." << std::endl;
        infile << "     .            _        .                    .          " << std::endl;
        infile << "  ,              /;-._,-.____        ,-----.__             " << std::endl;
        infile << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,         " << std::endl;
        infile << "  `                 \\   _|`'=:_::.`.);  \\ __/ /          " << std::endl;
        infile << "                      ,    `./  \\:. `.   )==-'  .         " << std::endl;
        infile << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .    " << std::endl;
        infile << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o            " << std::endl;
        infile << "       .    /:+- - + +- : :- + + -:'  /(o-) \\()     .     " << std::endl;
        infile << "  .      ,=':  \\    ` `/` ' , , ,:' `'--.-----._/`7       " << std::endl;
        infile << "   `.   (    \\: \\,-._` ` + '\\, ,   _,--._,---:.__/      " << std::endl;
        infile << "              \\:  `  X` _| _,\\/'   .-'                   " << std::endl;
        infile << ".               ':._:`\\____  /:'  /      .           .    " << std::endl;
        infile << "                    \\::.  :\\/:'  /              +        " << std::endl;
        infile << "   .                 `.:.  /:'  |      .                   " << std::endl;
        infile << "           .           ):_(:)   \\           .             " << std::endl;
        infile << "                      /:. _/ ,  |                          " << std::endl;
        infile << "                   . |::.     ,`                  .        " << std::endl;
        infile << "     .                |::.    ||                           " << std::endl;
        infile << "                      |::.\\  \\ `.                        " << std::endl;
        infile << "                      |:::|\\    |                         " << std::endl;
        infile << "              O       |:::/| |  |                  (o      " << std::endl;
        infile << "               )  ___/#\\::`/ (O)'==._____   O, (O) /`     " << std::endl;
        infile << "          ~~~w/w~'~~,\\` `:/,-(~)~~~~~~~~~o~\\~/~w|/~      " << std::endl;
        infile << "      ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~         " << std::endl;
    }
    catch (const char * e)
    {
        std::cout << e << std::endl;
    }
}