#include <iostream>
#include "fileMenager/model.h"

int main(){
    try
    {
        Model model;
        
        Files::CreateFile();
        
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
