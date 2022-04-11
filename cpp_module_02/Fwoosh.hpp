/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:09:51 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 14:43:37 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP

# define FWOOSH_HPP

# include "ASpell.hpp"
# include <iostream>
# include <string>

class Fwoosh : public ASpell
{
	public:
		Fwoosh(void);
		Fwoosh(const Fwoosh& other);
		~Fwoosh(void);

		Fwoosh& operator = (const Fwoosh& other);

	public:
		ASpell* clone(void) const;
};

#endif