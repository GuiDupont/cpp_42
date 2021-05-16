/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:49:30 by gdupont           #+#    #+#             */
/*   Updated: 2021/05/13 12:50:00 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

#include <sstream>

class Brain {
	
	public:
	Brain(void);
	~Brain(void);
	int getNb_neurals(void);
	int		volume;

	std::string identify() const;
	
	
	private:
	int		nb_neurals;
};

#endif