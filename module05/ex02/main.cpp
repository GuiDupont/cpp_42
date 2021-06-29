/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:26:06 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/29 16:40:58 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat min = Bureaucrat("min", 149);
	Bureaucrat top = Bureaucrat("top", 1);
	ShrubberyCreationForm shrub = ShrubberyCreationForm("France");
	RobotomyRequestForm robot = RobotomyRequestForm("Belgique");
	PresidentialPardonForm prez = PresidentialPardonForm("USA");
	
	std::cout << "##### Shruberry ####\n\n";
	std::cout << shrub;
	shrub.execute(top);
	top.signForm(shrub);
	std::cout << shrub;
	shrub.execute(min);
	shrub.execute(top);

	std::cout << "\n\n##### Robotomy ####\n\n";
	std::cout << robot;
	robot.execute(top);
	top.signForm(robot);
	std::cout << robot;
	robot.execute(min);
	robot.execute(top);
	
	std::cout << "\n\n##### Prez ####\n\n";
	std::cout << prez;
	prez.execute(top);
	top.signForm(prez);
	std::cout << prez;
	prez.execute(min);
	prez.execute(top);
	min.executeForm(prez);
}