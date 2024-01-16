#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat &cat);
		Cat &operator=(const Cat &cat);
		~Cat();
	
		void MakeSound() const;
		std::string getType() const;
};

#endif