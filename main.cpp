#include <iostream>
#include "fileMenager/model.h"

int main(){
    try
    {
        Model model;
        
        model.GetPath("main.txt");
        std::cout << model << std::endl;
        //LOL KEK
    }

    catch(std::string err)
    {
        std::cerr << err << '\n';
    }

    catch(...)
    {
        std::cout << "Unknown error(" << std::endl;
    }

    return 0;
}
