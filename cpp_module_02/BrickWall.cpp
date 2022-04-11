/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:22:47 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:17:09 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BrickWall.hpp"

BrickWall::BrickWall(void)
{
	this->type = "Inconspicuous Red-brick Wall";
}

BrickWall::BrickWall(const BrickWall& other)
{
	*this = other;
}

BrickWall::~BrickWall(void)
{
	// do nothing
}

BrickWall& BrickWall::operator = (const BrickWall& other)
{
	this->type = other.type;
	return (*this);
}

ATarget* BrickWall::clone(void) const
{
	return (new BrickWall());
}