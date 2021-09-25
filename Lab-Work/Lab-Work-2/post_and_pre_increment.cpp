#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1,2,3,4,5};

    int *p = arr;

    cout<<"Address: "<<p<<endl;
    cout<<*p++<<endl<<; // firstly it will print the the value on 0th index then it will icrement it's address.

    cout<<"Address: "<<p<<endl;
    cout<<*++p<<endl;   // Now firstly it will increment address and then it will print the value

    cout<<"Address: "<<p<<endl;
    cout<<++*p<<endl;  // It will increment the value at the address where the current pointe ris pointing

    cout<<"Address: "<<p<<endl;
    cout<<(*p)++<<endl; // It will print the value then it will increment the value

    for(int i=0; i<5; i++)
    {

        cout<<arr[i]<<endl;

    }


}
