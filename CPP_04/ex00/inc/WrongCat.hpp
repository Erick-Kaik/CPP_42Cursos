#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat &wrongCat);
		WrongCat &operator=(const WrongCat &wrongCat);
		~WrongCat();

		void MakeSound() const;
		std::string getType() const;
};

#endif