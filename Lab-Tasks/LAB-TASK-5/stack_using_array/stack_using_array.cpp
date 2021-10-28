#include <iostream>
using namespace std;
class stack_using_array
{
    private:

        int *top, *temp, *stk;
        int size;


    public:
        void push();
        void pop();
        void print();
        stack_using_array();

};

stack_using_array :: stack_using_array()
{
    top = temp = NULL;

    cout<<"Enter the size of an stack: ";
    cin>>size;

    stk = new int[size];
}

void stack_using_array :: push()
{
    if(top==NULL)
    {
        top = stk;
        cout<<"Enter the first element:";
        cin>>*stk;
        return;
    }

    if ((stk + size-1 ) == top)
    {
        cout<<"Stack overflows";
        return;
    }

    top++;
    cout<<"Enter the element: ";
    cin>>*top;
    return;



};

void stack_using_array::pop()
{
    if(top==NULL)
    {
        cout<<"Stack under flows";
        return;

    }

    if(top==stk)
    {
        top=NULL;
        return;
    }

    top--;


}

void stack_using_array :: print()
{
    while(top!= NULL)
    {

        cout<<*top<<" ";
        pop();

    }


}


int main()
{

    stack_using_array* s;

    s = new stack_using_array;

    s->push();
    s->push();
    s->push();
    s->pop();
    s->print();
    s->pop();
}
