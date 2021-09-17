#include <iostream>
using namespace std;
int main()
{

    int a = 5;

    int *ptr = &a;

    int **ptr2 = &ptr;


    cout<<"Value of a: "<<a<<endl;

    cout<<"Address of 'a' stored in ptr:"<<ptr<<endl;

    cout<<"Address of ptr stored in ptr2: "<<ptr2<<endl;

    cout<<"Value of *ptr2:"<<*ptr2<<endl;

    cout<<"Value of **ptr2:"<<**ptr2<<endl;




}
