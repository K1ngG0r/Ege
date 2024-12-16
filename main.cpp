#include <iostream>
#include "src/Director/direct.h"

int main(){
    Direct dr{"src/"};

    std::cout << dr << std::endl;

    return 0;
}
