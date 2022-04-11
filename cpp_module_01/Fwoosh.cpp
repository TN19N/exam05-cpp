/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:22:47 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:00:13 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fwoosh.hpp"

Fwoosh::Fwoosh(void)
{
	this->name = "Fwoosh";
	this->effects = "fwooshed";
}

Fwoosh::Fwoosh(const Fwoosh& other)
{
	*this = other;
}

Fwoosh::~Fwoosh(void)
{
	// do nothing
}

Fwoosh& Fwoosh::operator = (const Fwoosh& other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

ASpell* Fwoosh::clone(void) const
{
	return (new Fwoosh());
}