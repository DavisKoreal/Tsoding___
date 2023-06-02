
#include "modelling.hpp"

void Model::cost_function()
{
    cout << "calculating cost/error pf approximating function " << endl;
    double cost = 1000;

        for (auto i = 0; i < model_data.size(); i++)
        {
            double approx = approx_function(model_data[i][0]);
            cost = pow(model_data[i][1] - approx, 2);
            cout << "coefficient " << coefficient <<"approx:" << approx << " Expected: " << model_data[i][1] << " cost:" << cost <<" loss derivative " << cost_function_derivative(i, model_data[i][1], increment)<< endl;
            coefficient -= (learning_rate * cost_function_derivative(i, model_data[i][1], increment));
        }    
}

void Model::print_cost()
{
    cost_function();
}