#include "direct.h"

Direct::
    Direct(): path{"."} {}

Direct::
    Direct(std::string path): path{path}{}

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
    for (const auto& entry : fs::directory_iterator(dr.path))
    {
        std::string tmp = entry.path();

        out << tmp.substr(dr.FindLastChar(tmp, '/') + 1, tmp.size()) << std::endl;
    }

    return out;
}