#include "hello.h"

Hello::Hello(const std::string& name) : m_name(name) {}

std::string Hello::get_greeting() const {
    return "Hello, " + m_name + "! Welcom CMake C++ Project!";
}