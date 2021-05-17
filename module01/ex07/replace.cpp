/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 21:50:36 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/17 10:45:27 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int 	print_exit(std::string log, int exit)
{
	std::cout << log << std::endl;
	return (exit);
}


void	replace(std::ifstream *file, std::ofstream *dest, std::string a, std::string b)
{
	std::string line;
	size_t pos = 0;

	while (1)
	{
		std::getline(*file, line);
		pos = 0;
		while (1)
		{
			pos = line.find(a, pos);
			if (pos == std::string::npos)
				break;
			line.replace(pos, a.length(), b);
			pos += b.length();
		}
		*dest << line << std::endl;
		if (file->eof() || file->fail() || file->bad())
			break ;
		
	}
}

std::string setReplaceName(char *filename)
{
	std::string result = "";
	int i = -1;

	while (filename[++i])
		result += toupper(filename[i]);
	result += ".replace";
	return (result);
	
}

int main(int ac, char **av)
{
	std::ifstream file;
	std::ofstream dest;
	std::string replaceName;

	if (ac != 4)
		return (print_exit("Wrong number of arguments", 1));
	file.open(av[1], std::ifstream::in);
	if (!file.is_open())
		return (print_exit("Can't open file", 1));
	replaceName = setReplaceName(av[1]);
	dest.open(replaceName.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!dest.is_open())
		return (print_exit("Can't open replace file", 1));
	replace(&file, &dest, av[2], av[3]);
	return (0);
}

// ./my_replace marseillaise a b && cat MARSEILLAISE.replace