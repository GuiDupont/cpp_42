/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <gdupont@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:06:11 by gdupont           #+#    #+#             */
/*   Updated: 2021/06/03 16:16:58 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

#include <iostream>

class Enemy {
	protected:
	int 		_hp;
	std::string _type;

	public:

	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & rhs);
	virtual ~Enemy(void);
	Enemy const & operator=(Enemy const & to_copy);

	std::string virtual getType() const;
	int 				getHp() const;
	
	virtual void takeDamage(int nb);

	private:
	Enemy(void);
};


#endif
