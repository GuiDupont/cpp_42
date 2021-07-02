/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:08:37 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/02 10:44:54 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main(void)
{
	int array[3] = {1, 2, 3};
	displayArray(array, 3);
	iter(array, 3, &add1);
	displayArray(array, 3);


	long arrayl[3] = {300, 20, 12};
	displayArray(arrayl, 3);
	iter(arrayl, 3, &multiplyBy2);
	displayArray(arrayl, 3);
}
