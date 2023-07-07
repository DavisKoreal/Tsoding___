#include <iostream>
#include <stdio.h>
using namespace std;



double function(double x)
{
    return (x*x);
}

void intergrate(int x1, int x2, double (*functionn)(double))
{

    std::cout << "I am intergrating from " << x1 << " to " << x2 << std::endl;
    double sum = 0;

    for(double i = x1; i <= x2; i+=0.01)
    {
        cout << sum << " + " << functionn(i) << " = ";
        sum += (functionn(i) * 0.01);
        cout << sum << endl;
    }
    std::cout << "The sum is " << sum << std::endl;
}

int main()
{
    intergrate(0, 10, &function);
    
}

