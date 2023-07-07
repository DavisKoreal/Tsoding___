#ifndef MODELLING_HPP
#define MODELLING_HPP
#include "headers.hpp"



class Model
{
public:

    double increment = 0.1; //this is the increment that the model uses to calculate the derivative
    double learning_rate = 0.00001; //this is the learning rate of the model
    double coefficient; //this is the coefficient that the model is trying to find
    vector<vector<int>> data_; //this is the data that the model is trying to approximate
    Model(); //populates the data_ vector with data that the model is trying to approximate
    void print_data_(); //prints the data that this model is trying to approximate using a function
    void error_function(); //error function that the model is trying to minimize
    void print_error(); //prints the error of the model
    double error_function_derivative(double x, double y, double h); //derivative of the error function with respect to the constant (coefficient

    
};

#endif