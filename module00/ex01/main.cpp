/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:50:44 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/17 09:15:50 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

int 	my_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

void	print_string_or_space(std::string str)
{
	int i = -1;
	int space_to_print;
	int char_to_print;

	char_to_print = my_min(10, str.length());
	space_to_print = 10 - char_to_print; 
	while (++i < space_to_print)
		std::cout << " ";
	i = -1;
	while (++i < char_to_print)
	{
		if (str[i + 1] && i == char_to_print - 1)
			std::cout << '.';
		else
			std::cout << str[i];
	}
	std::cout << '|';
}
void	search_routine(contact contact_list[8], int only_display)
{
	int i = -1;
	int valid = 0;

	print_string_or_space("index");
	print_string_or_space("first_name");
	print_string_or_space("last_name");
	print_string_or_space("nickname");
	std::cout << std::endl;
	while (++i < 8)
	{
		if (contact_list[i].index != -1)
			contact_list[i].print_partial_info();
	}
	if (only_display || contact_list[0].index == -1)
		return ;
	while (!valid)
	{
		std::cout << "Que contacto te gustaria ver (indexo por favor)?\n";
		std::cin >> i;
		if (!std::cin.fail())
			valid = 1;
		else
			std::cout << "Necessito un digit\n";
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');

	}
	if (i < 0 || i > 7 || contact_list[i].index == -1)
	{
		std::cout << "No es possible\n";
		return ;
	}
	contact_list[i].print_all_info();
}


void	update_variable(std::string *str, std::string variable)
{
	std::string buffer;
	
	std::cout << "Que valor quieres por: " << variable << std::endl;
	std::cin >> buffer;
	(*str).append(buffer);
}

void	add_routine(contact contact_list[8])
{
	int i = -1;

	while (contact_list[++i].index != -1 && i < 8)
		;
	if (i == 8)
	{
		search_routine(contact_list, 1);
		while (1)
		{
			std::cout << "Capacidad maxima, quien gustaria despegar (indexo por favor)?\n";
			std::cin >> i;
			if (!std::cin.fail())
				break ;
			else
				std::cout << "Necessito un digit\n";
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}
		
	}
	if (i >= 8 || i < 0)
	{
		std::cout << "No es possible\n";
		return ;
	}
	contact_list[i].index = i;
	contact_list[i].update_info_contact();		
}

int main(void)
{
	// char command[124];
	std::string command;

	contact contact_list[8];
	while (1)
	{
		std::cout << "Puedes ADD un contacto, SEARCH un contacto o EXIT\n";
		std::cin >> command;
		if (strcmp(command.c_str(), "EXIT") == 0)
			break;
		else if (strcmp(command.c_str(), "ADD") == 0)
			add_routine(contact_list);	
		else if (strcmp(command.c_str(), "SEARCH") == 0)
			search_routine(contact_list, 0);
		else
			std::cout << "Operation valida estan EXIT, ADD, y SEARCH" << std::endl;

	}
	return (0);
}