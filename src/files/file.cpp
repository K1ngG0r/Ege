#include "file.h"

Files::
    Files(std::string path) : _path{path}{}

void Files::
    CopyFile(){

    }

void Files::
    CreateFile()
    {
        std::string fileName;

        std::cout << "Enter file name: ";
        std::cin >> fileName;

        std::ifstream in(fileName);

        std::ofstream out;

        if(!in.is_open())
        {
            out.open(fileName);
        }
        else
        {
            char choise;

            std::cout << "Error create file. The file already exists :( "
                <<"\nDo you want to re-record? [Y/n]: ";
            
            std::cin >> choise;

            if(choise == 'Y' || choise == 'y')
            {
                out.open(fileName);
            }

            else if(choise == 'N' || choise == 'n')
            {
                std::cout<<"Bye) \n";
            }
            else 
            {
                std::cout << "Unknown command :( \n";

                CreateFile();
            }
        }

        if(out.is_open())
        {
            char choise;

            std::cout << "Do you want to record? [y/n]: ";
            std::cin >> choise;

            if(choise == 'y' || choise == 'Y')
            {
                std::cout << "XYU" << std::endl;

                char tmp;

                while(tmp != 27)
                {
                    tmp = std::getchar();

                    in >> tmp;
                }
            }

            else if(choise == 'n' || choise == 'N')
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

std::ostream& operator<<(std::ostream& os, const Files& fl )
{

    std::ifstream in(fl._path);
    
    if(in.is_open())
    {
        os << "\nFile: " << fl._path << "\n\n";

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