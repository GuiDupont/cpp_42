/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:03:35 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/12 10:23:34 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string.h>

class Pony
{
	public:
	
	void present_myself() const;
	Pony(std::string new_name, int new_age);
	~Pony(void);
	
	private:
	
	std::string name;
	int age;	
};


#endif