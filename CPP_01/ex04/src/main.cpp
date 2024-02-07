/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:17:58 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/21 15:33:56 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ReplaceStr.hpp"

int main(int argc, char *argv[])
{
    ReplaceStr replaceStr;
    std::string::iterator it;
    
    if (argc != 4)
        std::cout << "Send only the 4 necessary arguments, namely 'Base File Name', 'Old Text' and 'New Text'!" << std::endl;
    else
    {
        if (replaceStr.OpenFile(argv[1], argv[2], argv[3]))
        {
            if (replaceStr.ReadLocateStr())
                std::cout << "Your '.replace' file was created with successor." << std::endl;
            else
                std::cout << "Your file has not had any modifications, so there is no need to create a new file." << std::endl;
        }
		else
			std::cout << "The file " << argv[1] << " does not exist!" << std::endl;
    }
    return 0;
}
