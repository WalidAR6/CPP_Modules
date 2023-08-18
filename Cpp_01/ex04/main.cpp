/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:46:51 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/18 17:19:13 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace_elem(std::string line, std::string s1, std::string s2, std::ofstream &out)
{
	size_t i = 0;
	size_t pos;

	while (line[i])
	{
		pos = line.find(s1, i);
		if (pos == i && !s1.empty())
		{
			out << s2;
			i += s1.size();
		}
		else
		{
			out << line[i];
			i++;
		}
	}
}


int main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	std::string line;
	std::string out = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	
	std::ifstream filename(out);
	if (!filename.is_open())
	{
		std::cout << "file does not exist" << std::endl;
		return (1);
	}
	std::ofstream outfile(out.append(".replace"));
	if (!outfile.is_open())
	{
		filename.close();
		return (0);
	}
	while (std::getline(filename, line))
	{
		replace_elem(line, av[2], av[3], outfile);
		if (!filename.eof())
			outfile << "" << std::endl;
	}
	filename.close();
	outfile.close();
	return (0);
}
