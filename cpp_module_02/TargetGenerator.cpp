/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:18:13 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:49:00 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{
	this->targets = NULL;
	this->number_of_targets = 0;
}

TargetGenerator::~TargetGenerator(void)
{
	for (int i = 0; i < this->number_of_targets; i++)
		delete this->targets[i];
	if (this->targets)
		delete[] this->targets;
}


void TargetGenerator::learnTargetType(ATarget* target)
{
	ATarget	**t_Target = new ATarget*[this->number_of_targets + 1]; 
	for (int i = 0; i < this->number_of_targets; i++)
		t_Target[i] = this->targets[i];
	t_Target[this->number_of_targets] = target->clone();
	if (this->targets)
		delete[] this->targets;
	this->targets = t_Target;
	this->number_of_targets++;
}

void TargetGenerator::forgetTargetType(const std::string& type)
{
	ATarget *tmp;
	
	for(int i = 0; i < this->number_of_targets; i++)
	{
		if (this->targets[i]->getType() == type)
		{
			ATarget	**t_Target = new ATarget*[this->number_of_targets - 1];
			int x = 0;
			for (int j = 0; j < this->number_of_targets - 1; j++)
			{
				if (i == j)
					x++;
				t_Target[i] = this->targets[x];
				x++;
			}
			delete this->targets[i];
			delete[] this->targets;
			this->targets = t_Target;
			this->number_of_targets--;
			return ;
		}
	}
}

ATarget* TargetGenerator::createTarget(const std::string& type) const
{
	for (int i = 0; i < this->number_of_targets; i++)
		if (this->targets[i]->getType() == type)
			return (this->targets[i]->clone());
	return (NULL);
}