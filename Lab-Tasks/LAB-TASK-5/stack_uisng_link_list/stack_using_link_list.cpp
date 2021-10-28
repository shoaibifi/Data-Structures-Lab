#include <iostream>
using namespace std;

struct node
{
    int info;
    node *next;

};


class stack_using_link_list
{
    private:
        node *top, *temp;

    public:
        void pop();
        void push();
        void print();
        stack_using_link_list();



};

stack_using_link_list :: stack_using_link_list()
{

    top = temp = NULL;


}


void stack_using_link_list :: push()
{

    if(top==NULL)
    {
        top = new node;
        cout<<"Enter the first element: ";
        cin>>top->info;
        top->next = NULL;
        return;
    }

    temp = new node;
    cout<<"Enter the element: ";
    cin>>temp->info;
    temp->next = top;
    top = temp;
    return;


}

void stack_using_link_list :: pop()
{
    if(top==NULL)
    {
        cout<<"Stack underflows";
        return;

    }

    temp = top;
    top = top->next;
    delete temp;
    temp = NULL;



}


void stack_using_link_list :: print()
{

    while(top!=NULL)
    {
        cout<<top->info<<" ";
        pop();

    }


}
int main()
{

    stack_using_link_list *s;

    s = new stack_using_link_list;

    s->push();
    s->push();
    s->push();

    s->pop();
    s->print();
    s->pop();



}
