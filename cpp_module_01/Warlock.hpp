/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:09:51 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 15:51:03 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP

# define WARLOCK_HPP

# include "ATarget.hpp"
# include "ASpell.hpp"
# include <iostream>
# include <string>

class Warlock
{
	private:
		std::string name;
		std::string title;
		ASpell**    spells;
		int         number_of_spells;
	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock(void);

	public:
		const std::string& getName(void) const;
		const std::string& getTitle(void) const;

	public:
		void setTitle(const std::string& new_title);
		void introduce() const;
	
	public:
		void learnSpell(ASpell* spell);
		void forgetSpell(const std::string& name);
		void launchSpell(const std::string& name, ATarget& target) const;
};

# endif