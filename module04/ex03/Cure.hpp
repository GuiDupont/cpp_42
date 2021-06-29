/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:40:58 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/28 16:13:41 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria {
	public:

		Cure(void);
		Cure(Cure const & rhs);
		~Cure(void);

		Cure const & operator=(Cure const & rhs);


		virtual AMateria*	clone() const;
		virtual void		use(ICharacter &target);
	
	protected:
	private:
};

#endif