#include "function.hpp"

function::function(std::vector <double> coefficients)
{
    this->coefficients = coefficients;
}

double function::runfunction(double x)
{
    double y = 0;
    for (int i = 0; i < coefficients.size(); i++)
    {
        y += coefficients[i] * x;
    }
    return y;
}