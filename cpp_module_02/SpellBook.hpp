/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:09:51 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:36:30 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP

# define SPELLBOOK_HPP

# include "ASpell.hpp"
# include <string>

class SpellBook
{
	private:
		ASpell**    spells;
		int         number_of_spells;
	public:
		SpellBook(void);
		~SpellBook(void);
	
	public:
		void learnSpell(ASpell* spell);
		void forgetSpell(const std::string& name);
		ASpell* createSpell(const std::string& name) const;
};

# endif