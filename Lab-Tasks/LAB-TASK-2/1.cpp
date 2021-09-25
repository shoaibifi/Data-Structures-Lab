#include <iostream>
using namespace std;



void myFun(int x)
{


    cout<<x<<endl;
    if(x==10)
    {
        return;

    }
    else{

        x++;
        myFun(x);

    }

}




int main()
{

    myFun(0);


    return 0;

}
