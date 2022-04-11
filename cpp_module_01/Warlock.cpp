/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:18:13 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:02:07 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title)
{
	this->name = name;
	this->title = title;
	this->spells = NULL;
	this->number_of_spells = 0;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->name << ": My job here is done!" << std::endl;
	for (int i = 0; i < this->number_of_spells; i++)
		delete this->spells[i];
	if (this->spells)
		delete[] this->spells;
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
	ASpell	**t_spells = new ASpell*[this->number_of_spells + 1]; 
	for (int i = 0; i < this->number_of_spells; i++)
		t_spells[i] = this->spells[i];
	t_spells[this->number_of_spells] = spell->clone();
	if (this->spells)
		delete[] this->spells;
	this->spells = t_spells;
	this->number_of_spells++;
}

void Warlock::forgetSpell(const std::string& name)
{
	ASpell *tmp;
	
	for(int i = 0; i < this->number_of_spells; i++)
	{
		if (this->spells[i]->getName() == name)
		{
			ASpell	**t_spells = new ASpell*[this->number_of_spells - 1];
			int x = 0;
			for (int j = 0; j < this->number_of_spells - 1; j++)
			{
				if (i == j)
					x++;
				t_spells[i] = this->spells[x];
				x++;
			}
			delete this->spells[i];
			delete[] this->spells;
			this->spells = t_spells;
			this->number_of_spells--;
			return ;
		}
	}
}

void Warlock::launchSpell(const std::string& name, ATarget& target) const
{
	for (int i = 0; i < this->number_of_spells; i++)
		if (this->spells[i]->getName() == name)
			this->spells[i]->launch(target);
}