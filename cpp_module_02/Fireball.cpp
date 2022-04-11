/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:22:47 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:13:17 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fireball.hpp"

Fireball::Fireball(void)
{
	this->name = "Fireball";
	this->effects = "burnt to a crisp";
}

Fireball::Fireball(const Fireball& other)
{
	*this = other;
}

Fireball::~Fireball(void)
{
	// do nothing
}

Fireball& Fireball::operator = (const Fireball& other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

ASpell* Fireball::clone(void) const
{
	return (new Fireball());
}