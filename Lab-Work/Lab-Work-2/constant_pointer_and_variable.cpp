#include <iostream>
using namespace tsd;
int main()
{

    int x;
    int * p1 = &x; // non-const pointer to non-const int
    const int * p2 = &x; // non-const pointer to const int
    int * const p3 = &x; // const pointer to non-const int
    const int * const p4 = &x; // const pointer to const int

//If the pointer is constant then we can't change the address of the pointer but using derefrencing operator we can change its value.
//If the variable is constant then we can only read the value of variable but we can't change it.


}
