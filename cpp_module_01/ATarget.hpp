/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:09:51 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 03:06:40 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP

# define ATARGET_HPP

# include "ASpell.hpp"
# include <iostream>
# include <string>

class ATarget
{
	protected:
		std::string type;
	public:
		ATarget(void);
		ATarget(const std::string& type);
		ATarget(const ATarget& other);
		~ATarget(void);

		ATarget& operator = (const ATarget& other);
		
	public:
		const std::string& getType(void) const;
		void getHitBySpell(const ASpell& spell);

};

# endif