/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:18:13 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/16 00:13:25 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::vector<ASpell*>::iterator iter = this->spells.begin();
	while (iter != this->spells.end())
	{
		delete *iter;
		iter++;
	}
	std::cout << this->name << ": My job here is done!" << std::endl;
}

void Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

const std::string& Warlock::getName(void) const
{
	return (this->name);
}

const std::string& Warlock::getTitle(void) const
{
	return (this->title);
}

void Warlock::setTitle(const std::string& new_title)
{
	this->title = new_title;
}

void Warlock::learnSpell(ASpell* spell)
{
	std::vector<ASpell*>::iterator iter = this->spells.begin();
	while (iter != this->spells.end())
	{
		if ((*iter)->getName() == spell->getName())
			return ;
		iter++;
	}
	this->spells.push_back(spell->clone());
}

void Warlock::forgetSpell(const std::string& name)
{
	std::vector<ASpell*>::iterator iter = this->spells.begin();
	while (iter != this->spells.end())
	{
		if ((*iter)->getName() == name)
		{
			this->spells.erase(iter);
			return ;
		}
		iter++;
	}
}

void Warlock::launchSpell(const std::string& name, ATarget& target) const
{
	std::vector<ASpell*>::const_iterator iter = (this->spells.begin());
	while (iter != this->spells.end())
	{
		if ((*iter)->getName() == name)
		{
			(*iter)->launch(target);
			return ;
		}
		iter++;
	}
}