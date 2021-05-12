/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:40:34 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/07 21:55:45 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

contact::contact(void) 
{			
	this->index = -1;
	return ;
}

contact::~contact(void)
{
	return ;
}

void	contact::print_partial_info(void) const
{
	std::string index;
	print_string_or_space(std::to_string(this->index));
	print_string_or_space(this->first_name);
	print_string_or_space(this->last_name);
	print_string_or_space(this->nickname);
	std::cout << std::endl;
}

void contact::update_info_contact()
{
	update_variable(&this->first_name, "el nombre");
	update_variable(&this->last_name, "el apellido");
	update_variable(&this->nickname, "apodo");
	update_variable(&this->login, "acceso");
	update_variable(&this->postal_address, "direccion postal");
	update_variable(&this->phone_number, "numero de telefono");
	update_variable(&this->birthday_date, "fecha de nacimiento");
	update_variable(&this->favorite_meal, "comida favorita");
	update_variable(&this->darkest_secret, "darkest secret");
}

void contact::print_all_info(void) const
{
	std::cout << "-----------------------" << std::endl;
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->login << std::endl;
	std::cout << this->postal_address << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->birthday_date << std::endl;
	std::cout << this->favorite_meal << std::endl;
	std::cout << "-----------------------" << std::endl;
}