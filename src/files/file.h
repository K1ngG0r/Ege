#pragma once

#ifndef __FILE_H__
#define __FILE_H__

#include <iostream>
#include <fstream>
#include <string>

class Files{
    private: 
        std::string _path;
    public:

        Files(std::string path);

        static void CreateFile();

        static void CopyFile();

        friend std::ostream& operator<<(std::ostream& os, const Files& fl );
};
#include "file.cpp"

#endif