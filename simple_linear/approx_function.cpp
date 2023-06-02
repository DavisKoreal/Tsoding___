#include "modelling.hpp"

double Model::approx_function(double independent_variable)
{ 
    return (coefficient * independent_variable);
}