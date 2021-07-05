/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 09:04:06 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/04 11:20:08 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
#include<bits/stdc++.h>

template<typename T>
bool	easyfind(T const & c, int nb) {	
	if (c.end() == std::find(c.begin(), c.end(), nb))
		return (false);
	return (true);
}	

template<typename T>
typename T::const_iterator	easyfind2(T const & c, int nb) {	
	return (std::find(c.begin(), c.end(), nb));
}	
