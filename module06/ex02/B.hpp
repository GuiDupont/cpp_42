/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:52:44 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/01 16:53:00 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_H
# define B_H

#include "Base.hpp"

class B : public Base {
	public:

	B(void);
	B(B const & rhs);
	~B(void);

	B const & operator=(B const & rhs);

	protected:

	private:
};

#endif

