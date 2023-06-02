#include "headers.hpp"
#include "modelling.hpp"

int main()
{
    cout << "Hello World!" << endl;
    srand(time(0));
    Model model = Model();
    model.print_model_data();
    model.print_cost();
    return 0;
}