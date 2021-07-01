/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:56:00 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/01 17:04:44 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <stdlib.h>
#include <time.h>

Base * generate(void) {
	int random;
	srand (time(NULL));
	random = rand() % 3;
	if (random == 2)
		return (new A);
	else if (random == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p) {
	
}

int main(void)
{
	Base *labase = generate();

	//tester un dynamic recast, s´il marche je connais le type
}
