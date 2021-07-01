/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:53:56 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/01 16:54:53 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_H
# define C_H

#include "Base.hpp"

class C : public Base {
	public:

	C(void);
	C(C const & rhs);
	~C(void);

	C const & operator=(C const & rhs);

	protected:

	private:
};

#endif

