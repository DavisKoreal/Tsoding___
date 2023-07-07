#include "data.hpp"

Data::Data()
{
    cout << "Creating data!" << endl;
    for (auto i = 0; i < 100; i++)
    {
        vector<int> temp;
        temp.push_back(i);
        temp.push_back(i*2);
        data_.push_back(temp);
    }
    cout<< "\n Data created! \n" << endl;

}

void Data::print_data_()
{
    cout << "The data is as follows" << endl;
    for (auto i = 0; i < 100; i++)
        cout << "[ " << i << ", " << data_[i][1] << " ]"<< endl;
}