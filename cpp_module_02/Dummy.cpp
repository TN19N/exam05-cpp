/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:22:47 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:00:06 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dummy.hpp"

Dummy::Dummy(void)
{
	this->type = "Target Practice Dummy";
}

Dummy::Dummy(const Dummy& other)
{
	*this = other;
}

Dummy::~Dummy(void)
{
	// do nothing
}

Dummy& Dummy::operator = (const Dummy& other)
{
	this->type = other.type;
	return (*this);
}

ATarget* Dummy::clone(void) const
{
	return (new Dummy());
}