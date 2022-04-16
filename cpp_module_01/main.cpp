/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:25:50 by mannouao          #+#    #+#             */
/*   Updated: 2022/04/16 00:12:25 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ASpell.hpp"
# include "Fwoosh.hpp"
# include "Dummy.hpp"
# include "Warlock.hpp"
# include <vector>
# include <algorithm>

class GT : public ASpell
{
	public:
		~GT(){};
		GT(void){
			this->name = "GT";
			this->effects = "Brom Brom!";
		};
		ASpell* clone(void) const {return (new GT());}	
};

class AB : public ASpell
{
	public:
		~AB(){};
		AB(void){
			this->name = "AB";
			this->effects = "ABC ABC!";
		};
		ASpell* clone(void) const {return (new AB());}
};

int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  AB*     ab = new AB();
  Fwoosh* fwoosh = new Fwoosh();
  GT*     gt = new GT();

  richard.learnSpell(fwoosh);
  richard.learnSpell(ab);
  richard.learnSpell(gt);
  richard.learnSpell(fwoosh);
  richard.learnSpell(ab);
  richard.learnSpell(gt);

  richard.introduce();
  
  richard.launchSpell("GT", bob);
  richard.launchSpell("Fwoosh", bob);
  richard.launchSpell("AB", bob);

  richard.forgetSpell("Fwoosh");
  richard.forgetSpell("AB");
  richard.forgetSpell("GT");
  
  richard.launchSpell("GT", bob);
  richard.launchSpell("Fwoosh", bob);
  richard.launchSpell("AB", bob);

  return (0);
}