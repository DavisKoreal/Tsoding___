#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include "headers.hpp"
class function

{
    public:
        std::vector <double> coefficients;

    function(std::vector <double> coefficients);
    function operator+(function f);
    function operator-(function f);
    function operator*(function f);
    function operator/(function f);
    function operator^(function f);


    double runfunction(double x);

};
#endif
