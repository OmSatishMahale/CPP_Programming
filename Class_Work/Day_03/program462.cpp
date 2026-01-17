#include<iostream>

using namespace std;

template <class T>
T Addition(T No1,T No2)
{
    T Ans=0;
    Ans=No1+No2;
    return Ans;
}

int main()
{
    cout<<"Addition of character's : "<<Addition('a','b')<<"\n";
    cout<<"Addition of Integer is  : "<<Addition(11,10)<<"\n";
    cout<<"Addition of float is : "<<Addition(90.3f,78.5f)<<"\n";
    cout<<"Addition of double is : "<<Addition(78.698,45.7321)<<"\n";

    return 0;
}