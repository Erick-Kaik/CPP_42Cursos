/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceStr.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:02:20 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/21 17:12:24 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACESTR_HPP
# define REPLACESTR_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

class ReplaceStr
{
    public:
        ReplaceStr();
        ~ReplaceStr();
        
        bool OpenFile(char *file, char *oldR, char *newR);
        bool ReadLocateStr(void);
        
        std::string _FileOpen;
        std::string _OldStr;
        std::string _NewStr;    
    private:
        std::string _filename;
        std::string _content;

        void CreateFile(void);
};

#endif