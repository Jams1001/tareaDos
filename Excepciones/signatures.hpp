#ifndef SIGNATURES_HPP
#define SIGNATURES_HPP
#include <iostream>

class MyException : public std::exception {
public:
    const char* what() const throw() override;
};

#endif //SIGNATURES_HPP
