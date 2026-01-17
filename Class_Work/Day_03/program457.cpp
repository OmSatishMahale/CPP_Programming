#include<iostream>

using namespace std;

int Addition(int No1,int No2)
{
    int Ans=0;
    Ans=No1+No2;
    return Ans;
}

int main()
{
    int i=0,j=0;
    int Ret=0;

    cout<<"Enter first number : \n";
    cin>>i;

    cout<<"Enter Second number : \n";
    cin>>j;

    Ret=Addition(i,j);
    cout<<"Addition is : "<<Ret;

    return 0;
}