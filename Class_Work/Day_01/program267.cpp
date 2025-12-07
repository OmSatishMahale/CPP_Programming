#include<iostream>

using namespace std;

template<class T>
int max(T No1,T No2,T No3)
{
    if((No1 > No2)&&(No1 >No3))
    {
        return No1;
    }
    else if((No2>No1)&&(No2>No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    double dValue1=10.0,dValue2=11.0,dValue3=28.0,dRet=0.0f;

    dRet=(dValue1,dValue2,dValue3);
    cout<<"Greater is "<<dRet<<"\n";

    return 0;
    
}