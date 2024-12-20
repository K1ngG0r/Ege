#include "file.h"

Files::
    Files(std::string path) : _path{path}{}


std::ostream& operator<<(std::ostream& os, const Files& fl )
{

    std::ifstream in(fl._path);
    
    if(in.is_open())
    {
        os << "File: " << fl._path << std::endl;

        char a;

        while(in.get(a))
        {
            os << a;
        }
    }
    else
    {
        throw (std::string)"Error open file :(";
    }

    return os;
}

void Files::
    CreateFile()
    {
        std::string fileName;

        std::cout << "Enter file name: ";
        std::cin >> fileName;

        std::ofstream out(fileName);

        if(out.is_open())
        {
            char choise;

            std::cout << "Do you want to record? [y/n] \nChoise: ";
            std::cin >> choise;

            if(choise == 'y')
            {

            }

            else if(choise == 'n')
            {
                std::cout << "OK)" << std::endl;
            }

            else
            {
                std::cout << "Unknown command( \nTry again [y/n] \n Choise: ";

                std::cin >> choise;

                if(choise == 'y')
                {
                    CreateFile();
                }
            }
        }
    }