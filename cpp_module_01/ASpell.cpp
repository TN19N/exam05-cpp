/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:18:13 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 03:03:22 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ASpell.hpp"

ASpell::ASpell(void)
{
	this->name = "";
	this->effects = "";
}

ASpell::ASpell(const std::string& name, const std::string& effects)
{
	this->name = name;
	this->effects = effects;
}

ASpell::ASpell(const ASpell& other)
{
	*this = other;
}

ASpell::~ASpell(void)
{
	// do nothing
}

ASpell& ASpell::operator = (const ASpell& other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

const std::string& ASpell::getName(void) const
{
	return (this->name);
}

const std::string& ASpell::getEffects(void) const
{
	return (this->effects);
}
