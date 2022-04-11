/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:18:13 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:32:42 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SpellBook.hpp"

SpellBook::SpellBook(void)
{
	this->spells = NULL;
	this->number_of_spells = 0;
}

SpellBook::~SpellBook(void)
{
	for (int i = 0; i < this->number_of_spells; i++)
		delete this->spells[i];
	if (this->spells)
		delete[] this->spells;
}


void SpellBook::learnSpell(ASpell* spell)
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

void SpellBook::forgetSpell(const std::string& name)
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

ASpell* SpellBook::createSpell(const std::string& name) const
{
	for (int i = 0; i < this->number_of_spells; i++)
		if (this->spells[i]->getName() == name)
			return (this->spells[i]->clone());
	return (NULL);
}