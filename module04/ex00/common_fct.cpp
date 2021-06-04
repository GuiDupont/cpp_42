/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common_fct.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:50:54 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/03 11:51:48 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common_fct.hpp"

void	print_string_upper(std::ostream & o, std::string const & string)
{
	int i = -1;
	char *str = new char[string.length() + 1];

	strcpy(str, string.c_str());
	while (str[++i])
		o << (char)toupper(str[i]);
}