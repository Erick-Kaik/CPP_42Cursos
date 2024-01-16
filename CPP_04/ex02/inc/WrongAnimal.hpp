#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal &wrongAnimal);
		WrongAnimal &operator=(const WrongAnimal &wrongAnimal);
		virtual ~WrongAnimal();

		virtual void MakeSound() const;
		virtual std::string getType() const;
	protected:
		std::string type;
};

#endif