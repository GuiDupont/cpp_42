/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:53:37 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/24 14:29:02 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

#include "AMateria.hpp"

class IMateriaSource {
	public:

	virtual ~IMateriaSource() {};
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif

