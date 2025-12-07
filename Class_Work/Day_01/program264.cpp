#include<iostream>

using namespace std;

int max(int No1,int No2)
{
    if(No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}

int main()
{
    int iValue1=10,iValue2=11,iRet=0;

    iRet=(iValue1,iValue2);
    cout<<"Greater is "<<iRet<<"\n";
    
}