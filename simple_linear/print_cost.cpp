
#include "modelling.hpp"

void Model::error_function()
{
    cout << "calculating error/error pf approximating function " << endl;
    double error = 1000;
    while(error > 0.05)
    {
        for (auto i = 0; i < data_.size(); i++)
        {
            double approx = approx_function(data_[i][0]);
            error = pow((data_[i][1] - approx), 2);
            cout << "coefficient " << coefficient <<"approx:" << approx << " Expected: " << data_[i][1] << " error:" << error <<" loss derivative " << error_function_derivative(i, data_[i][1], increment)<< endl;
            coefficient -= (learning_rate * error_function_derivative(i, data_[i][1], increment));
        }
    }
            
}

void Model::print_error()
{   
    error_function();
}
