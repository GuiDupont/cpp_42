/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:06:09 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/03 16:11:38 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) { }

Enemy::Enemy(int hp, std::string const & type) :
	_hp(hp), _type(type) { }

Enemy::Enemy(Enemy const & src) {
	*this = src;
}

Enemy::~Enemy(void) { 
	
}

Enemy const & Enemy::operator=(Enemy const & rhs) {
	this->_type = rhs.getType();
	this->_hp = rhs.getHp();
	return (*this);
}

int			Enemy::getHp() const {
	return (this->_hp);
}

std::string Enemy::getType() const {
	return (this->_type);
}

void		Enemy::takeDamage(int nb)
{
	if (nb < 0)
		return ;
	this->_hp -= nb;
	if (this->_hp < 0)
		this->_hp = 0;
	std::cout << this->_type << ": I only have " << this->_hp 
	<< " hp!" << std::endl;
}
