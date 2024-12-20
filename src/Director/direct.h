#pragma once

#ifndef __DIRECT_H__
#define __DIRECT_H__


#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

class Direct{
    private:
        std::string _path;
    private:
        //Ищем последний символ
        int FindLastChar(std::string tmp, char a);
    public:
        //Конструктор по умолчанию, ставим "." т.е. путь к начальной дериктории
        Direct();

        //Конструктор с указанием пути к дериктории
        Direct(std::string path);
        
        //Перегурзка оперетора вывода
        friend std::ostream& operator<<(std::ostream& out, Direct& dr);
};

#include "direct.cpp"

#endif