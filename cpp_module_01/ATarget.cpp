/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:06:49 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 03:08:50 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ATarget.hpp"

ATarget::ATarget(void)
{
	this->type = "";
}

ATarget::ATarget(const std::string& type)
{
	this->type = type;
}

ATarget::ATarget(const ATarget& other)
{
	*this = other;
}

ATarget::~ATarget(void)
{
	// do nothing
}

ATarget& ATarget::operator = (const ATarget& other)
{
	this->type = other.type;
	return (*this);
}

const std::string& ATarget::getType(void) const
{
	return (this->type);
}

void 