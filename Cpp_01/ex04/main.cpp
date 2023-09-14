/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:46:51 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/14 15:17:39 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace_elem(std::string line, std::string s1, std::string s2, std::ofstream &out)
{
	size_t pos;

	while (true)
	{
		if (line.empty())
			return ;
		pos = line.find(s1);
		if (pos == line.size() || pos > line.size() || pos < 0)
		{
			out << line;
			return ;
		}
		out << line.substr(0, pos);
		out << s2;
		line = line.substr(pos + s1.size(), line.size());
	}
}

int is_empty(std::string inf)
{
	std::string line;

	std::ifstream filename(inf);
	std::getline(filename, line);
	if (line.empty())
	{
		filename.close();
		return (1);
	}
	filename.close();
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	std::string line;
	std::string out = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	
	if (s1.empty())
		return (1);
	std::ifstream filename(out);
	if (!filename.is_open())
	{
		std::cout << "Can't open file" << std::endl;
		return (1);
	}
	if (is_empty(out))
	{
		std::cout << "File is empty" << std::endl;
		filename.close();
		return (1);
	}
	std::ofstream outfile(out.append(".replace"));
	if (!outfile.is_open())
	{
		std::cout << "Can't open file" << std::endl;
		filename.close();
		return (0);
	}
	std::getline(filename, line, '\0');
	replace_elem(line, s1, s2, outfile);
	filename.close();
	outfile.close();
	return (0);
}
