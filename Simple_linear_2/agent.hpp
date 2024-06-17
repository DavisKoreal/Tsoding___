#ifndef AGENT_HPP
#define AGENT_HPP

#include "headers.hpp"

class agent
{
    public:
    //approximating_function
    //dataset
    Function approximating_function;
    Data dataset;
    double cost_;

    agent();
    double find_change(double x1, double (*function) (double));
    void get_cost();
    void work();

};


#endif
