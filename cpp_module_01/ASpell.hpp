/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:09:51 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 15:59:27 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP

# define ASPELL_HPP

# include "ATarget.hpp"
# include <iostream>
# include <string>

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell(void);
		ASpell(const std::string& name, const std::string& effects);
		ASpell(const ASpell& other);
		virtual ~ASpell(void);

		ASpell& operator = (const ASpell& other);

	public:
		const std::string& getName(void) const;
		const std::string& getEffects(void) const;
		void launch(const ATarget& target) const;

	public:
		virtual ASpell* clone(void) const = 0;
};

# endif