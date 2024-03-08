/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:34:34 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/03/04 15:38:34 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

	std::cout << "Phase 1" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    //SCOPE
	std::cout << "Phase 2" << std::endl;
    {
        Array<int> tmp;
		std::cout << "Phase 2.1" << std::endl;
        try
        {
            for (int i = 0; i < MAX_VAL + 1; i++)
                std::cout << "tmp[" << i << "]:\t" << tmp[i] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\t';
            std::cerr << "You tried to access past the last element of the array" << std::endl;
        }
        tmp = numbers;
        Array<int> test(tmp);
		std::cout << "Phase 2.2" << std::endl;
        try
        {
            for (int i = 0; i < MAX_VAL + 1; i++)
			{
				if (tmp[i] != test[i])
				{
					std::cerr << "didn't save the same value!!" << std::endl;
					return 1;
				}
				// std::cout << "tmp[" << i << "]:\t" << tmp[i] << std::endl; //uncomment these two lines to see the arrays have the same values
				// std::cout << "test[" << i << "]:\t" << test[i] << std::endl;
			}
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\t';
            std::cerr << "You tried to access past the last element of the array" << std::endl;
        }

		std::cout << "Phase 2.3" << std::endl;
        std::cout << std::endl << "test[1]:\t" << test[1] << std::endl;
        std::cout << "tmp[1]:\t\t" << tmp[1] << std::endl << std::endl;

        test[1] = 123456789;

		std::cout << "Phase 2.4" << std::endl;
        std::cout << "test[1]:\t" << test[1] << std::endl;
        std::cout << "tmp[1]:\t\t" << tmp[1] << std::endl << std::endl;
    }

	std::cout << "Phase 3" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

	std::cout << "Phase 4" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        // std::cout << "index was -2" << std::endl;
    }

	std::cout << "Phase 5" << std::endl;
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        // std::cout << "tried to access past the last element of the array" << std::endl;
    }

	std::cout << "Phase 6" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     std::cout << numbers[i] << std::endl;
    // }
    return 0;
}