#include "modelling.hpp"

double Model::cost_function_derivative(double x, double y, double h)
{

    double a, b, result;
    a = approx_function(x + h) - y;
    b = approx_function(x) - y;
    result = (pow(a,2) - pow(b, 2)) / h;
    /**if ((a-b) < 0)
    {
        result *= -1;
    }**/
    return result;
}