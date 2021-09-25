#include <iostream>
using namespace std;
void printTable(int x , int i)
{

    if(i==11)
    {
        return;

    }

    else
    {

        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
        i++;

        printTable(x,i);



    }

}
int main()
{
    printTable(2, 1);


}
