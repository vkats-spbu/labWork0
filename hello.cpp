//Victor Kats second test project

#include "hello.h"

#include <iostream>

void prj2::SayHello()
{
    SayHello("world");
}

void prj2::SayHello(const std::string &name)
{
    std::cout << "Hello, " << name << "!"  << std::endl;
}

