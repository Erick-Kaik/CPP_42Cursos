#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual ~Animal();

		virtual void MakeSound() const;
		virtual std::string getType() const;
		virtual void display(size_t n) const;
	protected:
		std::string type;

};

#endif