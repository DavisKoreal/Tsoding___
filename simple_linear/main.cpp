#include "headers.hpp"
#include "modelling.hpp"

int main()
{
    cout << "Creating a model!" << endl;

    Model model = Model();

    
    model.print_model_data();
    model.print_cost();
    return 0;
}