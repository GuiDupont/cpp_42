/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:26:06 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/30 11:19:44 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat min = Bureaucrat("min", 149);
	Bureaucrat top = Bureaucrat("top", 1);
	Intern anyIntern;
	Form	*robot;
	Form	*prez;
	Form	*shrub;
	
	robot = anyIntern.makeForm("RobotomyRequestForm", "Germany");
	prez = anyIntern.makeForm("PresidentialPardonForm", "Italy");
	shrub = anyIntern.makeForm("ShrubberyCreationForm", "Azerbaidjan");

	std::cout << "##### Shruberry ####\n\n";
	std::cout << *shrub;
	shrub->execute(top);
	top.signForm(*shrub);
	std::cout << *shrub;
	shrub->execute(min);
	shrub->execute(top);

	std::cout << "\n\n##### Robotomy ####\n\n";
	std::cout << *robot;
	robot->execute(top);
	top.signForm(*robot);
	std::cout << *robot;
	robot->execute(min);
	robot->execute(top);
	
	std::cout << "\n\n##### Prez ####\n\n";
	std::cout << *prez;
	prez->execute(top);
	top.signForm(*prez);
	std::cout << *prez;
	prez->execute(min);
	prez->execute(top);
	min.executeForm(*prez);

	delete shrub;
	shrub = anyIntern.makeForm(" It should not work", "Italy");
	delete robot;
	delete prez;
	return (0);
}