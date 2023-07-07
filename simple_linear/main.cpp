#include "headers.hpp"
#include "modelling.hpp"

int main()
{
    cout << "Creating a model!" << endl;

    Model model = Model();
    model.print_data_();
    model.print_error();
    return 0;
}
