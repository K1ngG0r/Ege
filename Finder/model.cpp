#include "model.h"

Model::
    Model() : _path{ "." }{}

bool Model::
    isDir(std::string path)
    {
        if(path.find('.') && path[0] != '.') 
        {
            return false;
        }

        return true;
    }

void Model::
    GetPath(std::string newPath){
        _path = newPath;
    }

std::ostream& operator<<(std::ostream& os, const Model& menu)
{        
    //Это папка?
    if(Model::isDir(menu._path))
    {
        Direct tmp{menu._path};

        os << tmp << std::endl;

        return os;
    }

    //Не, не папка, если не папка => файл
    else
    {
        Files tmp{menu._path};

        os << tmp << std::endl;

        return os;
    }

    

}