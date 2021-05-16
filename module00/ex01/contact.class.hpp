/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:36:06 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/12 16:30:46 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <bits/stdc++.h>

class contact
{

	public:

	contact(void);
	~contact(void);
	
	int			index;

	void 		print_partial_info(void) const;
	void		update_info_contact();
	void 		print_all_info(void) const;

	private:
	
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string darkest_secret;
};

void	print_string_or_space(std::string str);
void	update_variable(std::string *str, std::string variable);

#endif