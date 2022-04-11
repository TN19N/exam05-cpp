/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:09:51 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 14:43:33 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP

# define DUMMY_HPP

# include "ATarget.hpp"
# include <iostream>
# include <string>

class Dummy : public ATarget
{
	public:
		Dummy(void);
		Dummy(const Dummy& other);
		~Dummy(void);

		Dummy& operator = (const Dummy& other);

	public:
		ATarget* clone(void) const;
};

#endif