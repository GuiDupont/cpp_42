/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:46:32 by gdupont           #+#    #+#             */
/*   Updated: 2021/07/02 14:55:42 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> arrayInt(5);
	std::cout << "Avant de changer la valeur : ";
	printElem(arrayInt, 0);
	arrayInt[0] = 2;
	std::cout << "\nApres avoir changé la valeur : ";
	printElem(arrayInt, 0);
	
	std::cout << "\nEn essayant d'acceder a un index hors-limites : ";	
	printElem(arrayInt, 6);
	
	Array<std::string> arrayString(5);
	std::cout << "\n\nAvant de changer la valeur : ";
	printElem(arrayString, 3);
	arrayString[3] = "Coucou les templates c'est trop genial\n";
	std::cout << "\nApres avoir changé la valeur : ";
	printElem(arrayString, 3);

	Array<std::string> arrayStringCopy(arrayString);
	std::cout << "\nOn cree une copie : ";
	std::cout << "\nIndex 3 de la copie : ";
	printElem(arrayStringCopy, 3);
	arrayString[3] = "Coucou\n";
	std::cout << "\nIndex 3 de l'originale apres modification : ";
	printElem(arrayString, 3);
	std::cout << "\nIndex 3 de la copie --> n'a pas change : ";
	printElem(arrayStringCopy, 3);

	std::cout << "\nSize de l'originale: " << arrayString.size();
	std::cout << "\nSize de la copie: " << arrayStringCopy.size();
	std::cout << "\n";


	return (0);
}