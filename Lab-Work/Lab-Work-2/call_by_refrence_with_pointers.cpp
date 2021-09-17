#include <iostream>
using namespace std;

void call_by_value(int *&myInt)
{


    *myInt = *myInt +1;

    cout<<"Value of my int is: "<<*myInt<<endl;


}

int main()
{

    int a = 10;

    int *ptr = &a;

    cout<<"Value of a before calling the function is: "<<a<<endl;

    call_by_value(ptr); // Now here we can also give  "&a" because ptr has the address of  "a" and we can give this address directly...

    cout<<"Value of a after calling the function is: "<<a<<endl;




}

