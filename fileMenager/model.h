#pragma once

#ifndef __MODEL_H__
#define __MODEL_H__

#include <iostream>
#include <string>

#include "../src/files/file.h"
#include "../src/Director/direct.h"

class Model{
    private:
        std::string _path;
    private:
        static bool isDir(std::string path);
    public:
        Model();

        void GetPath(std::string newPath);

        friend std::ostream& operator<<(std::ostream& os, const Model& menu);
};

#include "model.cpp"

#endif