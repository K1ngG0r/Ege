#include <iostream>
#include "Finder/model.h"

int main(){
    try
    {
        Model finder;
        
        Files::CreateFile();

//        std::cout << model << std::endl;
        
        // model.GetPath(".gitignore");
        // std::cout << model << std::endl;
        //LOL KEK
    }

    catch(std::string err)
    {
        std::cerr << err << '\n';
    }

    catch(...)
    {
        std::cout << "Unknown error(" << '\n';
    }

    return 0;
}
