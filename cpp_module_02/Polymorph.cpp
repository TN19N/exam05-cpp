/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:22:47 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:14:43 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Polymorph.hpp"

Polymorph::Polymorph(void)
{
	this->name = "Polymorph";
	this->effects = "turned into a critter";
}

Polymorph::Polymorph(const Polymorph& other)
{
	*this = other;
}

Polymorph::~Polymorph(void)
{
	// do nothing
}

Polymorph& Polymorph::operator = (const Polymorph& other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

ASpell* Polymorph::clone(void) const
{
	return (new Polymorph());
}