#include "function.hpp"



double Function::runfunction(double x)
{
    double y = 0;
    for (int i = 0; i < coefficients.size(); i++)
    {
        y += coefficients[i] * x;
    }
    return y;
}

Function::Function(std::vector <double> coefficients)
{
    this->coefficients = coefficients;
}

Function::Function()
{
    this->coefficients = std::vector <double> ();
}

void Function::add_coefficient(double coefficient)
{
    this->coefficients.push_back(coefficient);
}