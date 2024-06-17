#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include "headers.hpp"
class Function

{
    public:
        std::vector <double> coefficients;
    
    Function();
    void add_coefficient(double coefficient);
    Function(std::vector <double> coefficients);

    double runfunction(double x);

};
#endif
