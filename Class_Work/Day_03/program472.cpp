//Dynamic Object

#include<iostream>

using namespace std;

class ArrayX
{
    public : 
        int *Arr;          
        int iSize;

        ArrayX(int no)
        {
            cout<<"Inside Constructor\n";
            iSize = no;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;
        }
};

int main()
{
    //ArrayX aobj(10);                              //Static Memory
    //Step 1 : Allocate the memory
    ArrayX *aobj = new ArrayX(10);                  //Dynamic Memory

    //Step 2 : Use the memory

    //Step 3 : Deallocate the memory
    delete aobj;

    return 0;
}