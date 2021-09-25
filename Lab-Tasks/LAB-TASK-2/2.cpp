#include <iostream>
using namespace std;
void infinite(int x)
{

    cout<<x;
    x++;
    infinite(x);


}






int main()
{
infinite(0);
}
