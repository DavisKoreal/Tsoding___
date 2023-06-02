#ifndef MODELLING_HPP
#define MODELLING_HPP
#include "headers.hpp"



class Model
{
public:

    double increment = 0.1; //this is the increment that the model uses to calculate the derivative
    double learning_rate = 0.00001; //this is the learning rate of the model
    double coefficient; //this is the coefficient that the model is trying to find
    vector<vector<int>> model_data; //this is the data that the model is trying to approximate
    Model(); //populates the model_data vector with data that the model is trying to approximate
    void print_model_data(); //prints the data that this model is trying to approximate using a function
    double approx_function(double independent_var); //ideally should just take a function that kind of approximates the data
    void cost_function(); //cost function that the model is trying to minimize
    void print_cost(); //prints the cost of the model
    double cost_function_derivative(double x, double y, double h); //derivative of the cost function with respect to the constant (coefficient

    
};

#endif