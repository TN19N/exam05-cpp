/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:09:51 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:15:33 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP

# define BRICKWALL_HPP

# include "ATarget.hpp"
# include <iostream>
# include <string>

class BrickWall : public ATarget
{
	public:
		BrickWall(void);
		BrickWall(const BrickWall& other);
		~BrickWall(void);

		BrickWall& operator = (const BrickWall& other);

	public:
		ATarget* clone(void) const;
};

#endif