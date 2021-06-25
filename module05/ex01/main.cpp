/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:26:06 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/25 16:25:31 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat jean = Bureaucrat("jean", 149);
	Bureaucrat boss = Bureaucrat("boss", 1);
	Form		theForm = Form("Bigdeal", 3, 3);

	try
	{
		Form	test = Form("hugedeal", -1, -1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl; 
	}

	jean.signForm(theForm);
	
	std::cout << theForm;
	boss.signForm(theForm);
	
	std::cout << theForm;
}