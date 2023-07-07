#include "modelling.hpp"

void Model::print_data_()
{
    cout << "The mode data is as follows" << endl;
        for (auto i = 0; i < 100; i++)
            cout << "[ " << i << ", " << data_[i][1] << " ]"<< endl;
}