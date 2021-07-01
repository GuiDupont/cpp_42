/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:52:31 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/01 16:52:40 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_H
# define A_H

#include "Base.hpp"

class A : public Base {
	public:

	A(void);
	A(A const & rhs);
	~A(void);

	A const & operator=(A const & rhs);

	protected:

	private:
};

#endif

