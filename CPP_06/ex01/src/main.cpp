/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:20:23 by ekaik-ne          #+#    #+#             */
/*   Updated: 2024/02/15 16:31:45 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serialization.hpp"

int main(void)
{
	Data myData(42, "teste");

	uintptr_t serializedPtr = Serialization::serialize(&myData);

	Data *deserializedPtr = Serialization::deserialize(serializedPtr);

	if (deserializedPtr == &myData && deserializedPtr->displayIntValue() == myData.displayIntValue() && deserializedPtr->displayStringValue() == myData.displayStringValue())
		std::cout << "Serialization and deserialization successful!" << std::endl;
	else
		std::cout << "Serialization and deserialization failed!\n";

	std::cout << "Compare Values\n\tmyData: " << std::endl;
	myData.displayData();
	std::cout << "\tdeserializedPtr: " << std::endl;
	deserializedPtr->displayData();
	return 0;
}
