#pragma once

#ifndef __DIRECT_H__
#define __DIRECT_H__


#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

class Direct{
    private:
        std::string path;
    private:
        int FindLastChar(std::string tmp, char a);
    public:
        Direct();

        Direct(std::string path);

        friend std::ostream& operator<<(std::ostream& out, Direct& dr);
};

#include "direct.cpp"

#endif