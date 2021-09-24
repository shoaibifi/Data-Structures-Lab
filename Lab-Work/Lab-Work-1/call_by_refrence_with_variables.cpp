#include <iostream>
using namespace std;

void pass_by_refrence(int &myInt)
{

    myInt = myInt+1;

    cout<<"Value of my int  is: "<<myInt<<endl;;



}

int main()
{

    int a = 10;

    cout<<"Value of a before calling the function is: "<<a<<endl;

    pass_by_refrence(a);

    cout<<"Value of a after calling the function is: "<<a<<endl;

    return 0;
}

