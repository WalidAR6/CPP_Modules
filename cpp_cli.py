#/usr/bin/python3
import sys

if len(sys.argv) < 2:
    exit()

file_name = sys.argv[1]

str = """/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   {ClassName}.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:14:52 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/22 02:15:03 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef {DefineName}_H
# define {DefineName}_H

# include <iostream>

class {ClassName}
{
    private:
        std::string name;
    public:
        {ClassName}();
        {ClassName}(const {ClassName} &copy);
        {ClassName} & operator = (const {ClassName} &copy);
        ~{ClassName}();

        void        setName(std::string name);
        std::string getName();
};

#endif
"""
replace = str.replace("{DefineName}", file_name.upper())\
                .replace("{ClassName}", file_name)

with open(file_name + ".hpp", "w") as r:
    r.write(replace)