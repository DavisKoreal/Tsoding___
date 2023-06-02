#include "modelling.hpp"

Model::Model()
{
    coefficient = (rand() % 1000);
        for (auto i = 0; i < 101; i++)
        {
            vector<int> model_data__ = {i, i* -2};
            model_data.push_back(model_data__);
        }  


        cout << "Model generated" << endl;
        cout << "model_data size: " << model_data.size() << endl;
        cout << "model_data[0] size: " << model_data[0].size() << endl;
        cout << "starting coefficient " << coefficient << endl;
}