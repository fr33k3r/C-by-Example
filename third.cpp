#include <iostream>     //include ("import") the declarations for the I/O stream library

using namespace std;    //make names from std visible without std::

double square (double x)
{
    return x * x;
}

void print_square (double x)
{
    cout << "The square of " << x << " is " << square(x) << endl;
}

int main()
{
    print_square(1.234);
}
