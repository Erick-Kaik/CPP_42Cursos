/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceStr.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:02:24 by ekaik-ne          #+#    #+#             */
/*   Updated: 2023/12/21 17:33:42 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ReplaceStr.hpp"

ReplaceStr::ReplaceStr() { }

ReplaceStr::~ReplaceStr() { }

bool ReplaceStr::OpenFile(char *file, char *oldR, char *newR)
{
    std::fstream    reader;
    std::string     content;

    reader.open(file, std::fstream::in);
    if (!reader.is_open())
    {
        reader.close();
        return false;
    }
    content.assign(std::istreambuf_iterator<char>(reader), std::istreambuf_iterator<char>());
    reader.close();
    this->_FileOpen = content;
    this->_OldStr = oldR;
    this->_NewStr = newR;
    this->_filename = file;
    return true;
}

bool ReplaceStr::ReadLocateStr(void)
{
    size_t pos = 0;
    size_t lastPos = 0;

    pos = this->_FileOpen.find(this->_OldStr, pos);
    if (pos == std::string::npos)
        return false;
    while (pos != std::string::npos)
    {
        this->_content += this->_FileOpen.substr(lastPos, pos - lastPos);
        this->_content += this->_NewStr;
        pos += this->_OldStr.length();
        lastPos = pos;
        pos = this->_FileOpen.find(this->_OldStr, lastPos);
    }
    this->_content += this->_FileOpen.substr(lastPos);
    this->CreateFile();
    return true;
}

void ReplaceStr::CreateFile(void)
{
    std::string filename;
    std::fstream newFile;
    const char *aux;
    size_t pos = 0;

    pos = this->_filename.find_last_of('.');
    if (pos != std::string::npos)
        filename += this->_filename.substr(0, pos);
    else
        filename = this->_filename;
    filename += ".replace";

    aux = filename.c_str();
    newFile.open(aux, std::fstream::out);
    if (newFile.is_open())
    {
        newFile << this->_content << std::endl;
        newFile.close();
    }    
}