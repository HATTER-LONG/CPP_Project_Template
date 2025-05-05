#pragma once
#include <string>

class Hello {
public:
    explicit Hello(const std::string& name);
    std::string get_greeting() const;

private:
    std::string m_name;
};