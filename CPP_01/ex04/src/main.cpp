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
        std::cout << "falta arg" << std::endl;
    else
    {
        if (replaceStr.OpenFile(argv[1], argv[2], argv[3]))
        {
            if (replaceStr.ReadLocateStr())
                std::cout << "seu arquivo '.replace' foi criado com sucessor" << std::endl;
            else
                std::cout << "seu arquivo não teve nenhuma modificação, logo não ha necessidade de criar um novo arquivo" << std::endl;
        }
    }
    return 0;
}
