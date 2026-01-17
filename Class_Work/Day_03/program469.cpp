//Object Dynamic

#include<iostream>

using namespace std;

template <class T>
class Arithematic
{
    public : 
        T No1;
        T No2;

    Arithematic(T A,T B);
    T Addition();
    T Substraction();
};

template <class T>
Arithematic<T> :: Arithematic(T A,T B)
{
    No1=A;
    No2=B;
}

template <class T>
T Arithematic<T> :: Addition()
{
    T Ans;
    Ans=No1+No2;
    return Ans;
}

template <class T>
T Arithematic<T> :: Substraction()
{
    T Ans;
    Ans=No1-No2;
    return Ans;
}

int main()
{
    //Arithematic <int>iobj(11,10);                           Static Object creation

    Arithematic<int> *iobj = new Arithematic<int>(11,10);   //Dynamic object creation

    cout<<"Addition is : "<<iobj->Addition()<<"\n";
    cout<<"Substraction is : "<<iobj->Substraction()<<"\n";

    //Arithematic <double>dobj(11.8967,10.4567);                             Static Object Creation

    Arithematic<double> *dobj = new Arithematic<double>(11.6893,10.74324); //Dynamic Object creation

    cout<<"Addition is : "<<dobj->Addition()<<"\n";
    cout<<"Substraction is : "<<dobj->Substraction()<<"\n";    

    return 0;
}