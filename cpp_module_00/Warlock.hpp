/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:09:51 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 02:25:46 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP

# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock
{
	private:
		std::string name;
		std::string title;
	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock(void);

	public:
		const std::string& getName(void) const;
		const std::string& getTitle(void) const;

	public:
		void setTitle(const std::string& new_title);
		void introduce() const;
};

# endif