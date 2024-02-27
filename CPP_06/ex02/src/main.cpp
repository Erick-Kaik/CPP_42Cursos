/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:09:57 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/20 10:46:05 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/Base.hpp"
#include "../inc/C.hpp"

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

Base *generate(void) 
{
	std::time_t timer = std::time(0);
	int base = static_cast<int>(timer);
	std::srand(base);
	int numberGenerate = std::rand() % 3 + 1;
	switch (numberGenerate)
	{
		case 1:
			return new A;
			break;
		case 2:
			return new B;
			break;
		case 3:
			return new C;
			break;
		default:
			break;
	}
	return NULL;
}

void identify(Base *p)
{
	std::cout << "Object is of type: ";
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base &p)
{
	try 
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Object is of type: A" << std::endl;
		return ;
	}
	catch(const std::exception& e) { std::cerr << RED << "A is " << e.what() << RESET << std::endl ; }
	try 
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Object is of type: B" << std::endl;
		return ;
	}
	catch(const std::exception& e) { std::cerr << RED << "B is " << e.what() << RESET << std::endl ; }
	try 
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Object is of type: C" << std::endl;
		return ;
	}
	catch(const std::exception& e) { std::cerr << RED << "C is " << e.what() << RESET << std::endl ; }
}

int main(void)
{
	Base *obj = generate();

	std::cout << GREEN << "Identify Pointer" << RESET << std::endl;
	identify(obj);
	std::cout << GREEN << "Identify Memory Adress" << RESET << std::endl;
	identify(*obj);

	delete obj;
}
