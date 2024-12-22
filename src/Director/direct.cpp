#include "direct.h"

//Конструктор по умолчанию, ставим "." т.е. путь к начальной дериктории
Direct::
    Direct(): _path{"."} {}


Direct::
    Direct(std::string path): _path{path}{}


int Direct::
    FindLastChar(std::string tmp, char a){

        for (size_t j = tmp.size(); j > 0; j--)
        {
            if(tmp[j] == a)
            {
                return j;
            }
        }

        return 0;
    }


std::ostream& operator<<(std::ostream& out, Direct& dr)
{
    for (const auto& entry : fs::directory_iterator(dr._path))
    {
        std::string tmp = entry.path();

        out << tmp.substr(dr.FindLastChar(tmp, '/') + 1, tmp.size()) << std::endl;
    }

    return out;
}