/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:07:54 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/24 16:26:05 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
# include <iostream>
# include <string>
# include <string.h>

class MateriaSource : public IMateriaSource {
	public:

		MateriaSource(void);
		MateriaSource(MateriaSource const & rhs);
		virtual ~MateriaSource(void);
		MateriaSource const & operator=(MateriaSource const & rhs);

		virtual void		learnMateria(AMateria *);
		virtual AMateria	*createMateria(std::string const & type);

		void				deleteLearned(void);		
	protected:

		AMateria*	_learned[4];
		
	
	
};

#endif

