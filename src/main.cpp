#include "hello.h"
#include <iostream>

int main(int argc, char* argv[]) {
    std::string name = "World";

    if(argc > 1) {
        name = argv[1];
    }
    Hello hello(name);
    std::cout << hello.get_greeting() << std::endl;
    return 0;
}