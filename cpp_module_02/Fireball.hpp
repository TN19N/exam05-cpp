/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:09:51 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:12:24 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP

# define FIREBALL_HPP

# include "ASpell.hpp"
# include <iostream>
# include <string>

class Fireball : public ASpell
{
	public:
		Fireball(void);
		Fireball(const Fireball& other);
		~Fireball(void);

		Fireball& operator = (const Fireball& other);

	public:
		ASpell* clone(void) const;
};

#endif