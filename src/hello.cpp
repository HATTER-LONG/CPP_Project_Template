#include "hello.h"

Hello::Hello(const std::string& name) : name_(name) {}

std::string Hello::get_greeting() const {
    return "Hello, " + name_ + "! Welcom CMake C++ Project!";
}