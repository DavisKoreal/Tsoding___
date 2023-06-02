#include "modelling.hpp"

void Model::print_model_data()
{
    cout << "The mode data is as follows" << endl;
        for (auto i = 0; i < 100; i++)
            cout << "[ " << i << ", " << model_data[i][1] << " ]"<< endl;
}