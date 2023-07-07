#include "modelling.hpp"

Model::Model()
{
    srand(time(0));
    coefficient = (rand() % 1000);
        for (auto i = 0; i < 101; i++)
        {
            vector<int> data___ = {i, i* -2};
            data_.push_back(data___);
        }  


        cout << "Model generated" << endl;
        cout << "data_ size: " << data_.size() << endl;
        cout << "data_[0] size: " << data_[0].size() << endl;
        cout << "starting coefficient " << coefficient << endl;
}