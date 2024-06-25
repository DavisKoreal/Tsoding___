#include "agent.hpp"

agent::agent()
{
    this->approximating_function = Function();
    this->dataset = Data();
    this->cost_ = 10000;
}

double agent::find_change(double x1, double (*function) (double))
{
    return ((function(x1+0.001)-function(x1)) * 0.001);
}

/**

double agent::get_cost(double x1, double x2, double (*function) (double))
{
    
}
**/


/**
 * 1. get cost of current function
 * 2. get cost of function derivative with respect to coefficients of current function
 * 3. change coefficients of current function
 * 4. repeat
 */
void agent::work()
{
    while(cost_ > target_cost)
    {
        //get cost of current function
        get_cost();
        //get cost of function derivative with respect to coefficients of current function
        
        //change coefficients of current function
    }

}

void agent::get_cost()
{
    double cost = 0;
    for (int i = 0; i < dataset.data_.size(); i++)
    {
        cost += pow((dataset.data_[i][1] - approximating_function.runfunction(dataset.data_[i][1])), 2);
    }
    this->cost_ = cost;
}
