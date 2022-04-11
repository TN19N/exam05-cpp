/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:09:51 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/11 16:48:26 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP

# define TARGETGENERATOR_HPP

# include "ATarget.hpp"
# include <string>

class TargetGenerator
{
	private:
		ATarget**    targets;
		int         number_of_targets;
	public:
		TargetGenerator(void);
		~TargetGenerator(void);
	
	public:
		void learnTargetType(ATarget* Target);
		void forgetTargetType(const std::string& type);
		ATarget* createTarget(const std::string& type) const;
};

# endif