/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:03:30 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/12 10:51:56 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string new_name, int new_age) : name(new_name), age(new_age) {
	std::cout << name << " is alive\n";
}

Pony::~Pony(void) {
	std::cout << this->name << " is dead\n";
}

void	Pony::present_myself(void) const
{
	std::cout << "Hello my name is " << this->name << " and I am "
	<< this->age << " years old\n";
}
