/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:35:28 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/30 10:52:47 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", target, 145, 137) {
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & rhs) : Form("ShrubberyCreationForm", rhs.getTarget(), 145, 137) {
	*this = rhs;
}

ShrubberyCreationForm const & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
}

void ShrubberyCreationForm::execute (Bureaucrat const & executor) const {
	if (this->getSignedStatus() != true)
	{
		std::cout << "Form is not signed, it can't be executed\n";
		return ;
	}
	try
	{
		Form::canBeExecuted(executor);
		std::string fileName = this->getTarget() + "_shrubbery";
    	std::ofstream fd(fileName.c_str());
		
		fd << "          			@@@                    \n";
		fd << "               #@@@@@@@@@@@@@@@#             \n";
		fd << "             @@@@             @@@@           \n";
		fd << "           @@@@                 @@@@            \n";
		fd << "          @@@,                   *@@@           \n";
		fd << "        @@@@@                     @@@@@       \n";
		fd << "     @@@@@            @@@            @@@@@    \n";
		fd << "   @@@@               @@@               @@@,     \n";
		fd << "  @@@@                @@@&@@@@@.         @@@@    \n";
		fd << "  @@@                 @@@@@               @@@ \n";
		fd << "  @@@           @@@   @@@                 @@@ \n";
		fd << "  @@@            @@@@@@@@                .@@@ \n";
		fd << "  @@@@               @@@               @@@@ \n";
		fd << "   .@@@@             @@@             @@@@ \n";
		fd << "      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ \n";
		fd << "           *@@@@@.   @@@   .@@@@@. \n";
		fd << "                     @@@ \n";
		fd << "                     @@@ \n";
		fd << "                     @@@ \n";
		fd << "                     @@@ \n";
		fd << "                     @@@ \n";
		fd << "                     @@@ \n";
	
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl; 
	}	
}

Form	*ShrubberyCreationForm::returnSelfMalloc(std::string const & target) const {
	return (new ShrubberyCreationForm(target));
}
