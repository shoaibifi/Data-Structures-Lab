#include <iostream>
using namespace std;

int main()
{

    char var = 's';

    char *ptr = &var;

    cout<<"Value stored in Var: "<<*ptr<<endl;

    cout<<"Address stored in Var: "<<(void*)ptr<<endl;







}
