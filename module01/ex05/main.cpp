/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:56:21 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/17 10:08:08 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main(void)
{
	Human jean;

	std::cout << "through identify:               " << jean.identify() << "\n";
	std::cout << "through getBrain then identify: "<< \
	jean.getBrain().identify() << "\n";
	
	return (0);
}
