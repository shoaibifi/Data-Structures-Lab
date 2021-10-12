#include <iostream>
using namespace std;
class list
{
    private:
        int size;
        int *arr;
        int len;
        int *current;
        int *temp;
        int index;

    public:

        list();
        list(int userSize);
        list(list& otherlist);
        void clear();
        void insert(int value, int pos);
        void insert(int value);
        void remove(int pos);
        int get(int pos);
        void update(int value,int pos);
        bool find(int value);
        int length();
        void start();
        void end();
        bool isFull();
        bool isEmpty();
        void print();
};

list::list()
{


    arr = new int[size];
    size    = 5; // Any size.
    current = NULL;
    temp    = NULL;
    len     = 0;
    index    = 0;

    current = temp = arr;

    for(int i=0; i<size; i++)
    {

        *temp = -1;
        temp++;

    }

    current = temp = NULL;



}


list :: list(int userSize)
{

    arr = new int[size];
    size = userSize;

    current = NULL;
    temp    = NULL;
    len     = 0;
    size    = 5; // Any size.
    index   = 0;

    current = temp = arr;

    for(int i=0; i<size; i++)
    {

        *temp = -1;
        temp++;

    }

    current = temp = NULL;

}

//listt :: list(list& otherList)


void list :: clear()
{

    current = temp = arr;
    for(int i=0; i<size; i++)
    {

        *temp = -1;
        temp++;

    }

    current = temp = NULL;



}

void list :: insert(int value, int pos)
{
    if(len == size)
    {
        cout<<"Array is full"<<endl;
    }

    if(pos>size)
    {
        cout<<"Index out of range "<<endl;

    }

    else
    {
        current = temp = arr;

        for(int i=0; i<size; i++)
        {
            current ++;
            index++;

        }

        for(int i=0; i<size; i++)
        {

            if(index==pos)
            {
                *current = value;
                len++;
            }

            else
            {

                *current = *(current -1);
                 current --;
                 index --;

            }

        }





    }







}

void list :: insert(int value)
{

    if(*(current+1)==-1)
    {

           current++;
           index++;
           *current = value;
           len++;

    }

    else if(size == len)
    {
        cout<<"Array is full"<<endl;


    }

    else
    {
        cout<<"Current position is already Filled"<<endl;
    }



}

void list  :: remove (int pos)
{

    if(len==0)
    {

        cout<<"Array is Empty!!"<<endl;
    }




    else if(len!=0)
    {

        current = arr;
        index = 0;

        for(int i=0; i<size; i++)
        {
            if(pos==index)
            {

              for(int j=i; j<size;j++)
              {

                 *current = *(current+1);
                 current++;
                 index++;

              }
              temp = current;
              *temp = -1;


            }

            else
            {
                current ++;
                index++;
            }



        }




    }



}
void list :: print()
{
    current = arr;
    index = 0;

    for(int i=0; i<size;i++)
    {


        cout<<"Arr["<<i<<"] = "<<*current<<endl;
        current++;
        index++;


    }
}

int list :: get(int pos)
{

    current = arr;
    index = 0;

     if(pos>size)
        {

            cout<<"Index out of range"<<endl;
            return 0;

        }


    for(int i=0;i<size;i++)
    {




        if(index==pos)
        {

            if(*current!=-1)
            {

                cout<<"Value on index "<<pos<<" is: "<< *current<<endl;
                return 0;

            }

            else
            {

                cout<<"This index is empty!!"<<endl;
                return 0;


            }
        }
        else
        {

            current++;
            index++;

        }




    }



}

void list :: update(int value, int pos)
{

        current = arr;
        index = 0;


      for(int i=0; i<size; i++)
        {

            if(index==pos)
            {
                if(*current != -1)

                {

                    *current = value;
                    len++;
                    return;
                }


                else
                {
                    cout<<"This index is empty!!!"<<endl;
                    return;

                }
            }

            else
            {

                *current = *(current -1);
                 current --;
                 index --;

            }




}
}
int list :: length()
{
    return len;

}

void list :: start()
{

    current = arr;

}

void list ::end()
{

    index = 0;
    current = arr;

    for(int i=0 ; i<size ; i++)
        {
            if(index+1 <size )
            {
                current++;
                index++;
            }

            else
            {
                break;

            }
        }
}

bool list :: isFull()
{

    if(len==size)
    {
        return true;

    }

    else
    {
        return false;

    }

}





bool list :: isEmpty()
{

    if(len==0)
    {
        return true;

    }

    else
    {
        return false;

    }

}









int main()
{
    list l;
    l.insert(10,0);
    l.insert(13,1);
    l.insert(5,2);
    l.insert(88,3);
    l.insert(65,4);
    l.insert(8);
    //l.remove(3);
    l.print();
    l.get(3);
    cout<<l.isFull();

}
