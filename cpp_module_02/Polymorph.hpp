/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:09:51 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:14:00 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP

# define POLYMORPH_HPP

# include "ASpell.hpp"
# include <iostream>
# include <string>

class Polymorph : public ASpell
{
	public:
		Polymorph(void);
		Polymorph(const Polymorph& other);
		~Polymorph(void);

		Polymorph& operator = (const Polymorph& other);

	public:
		ASpell* clone(void) const;
};

#endif