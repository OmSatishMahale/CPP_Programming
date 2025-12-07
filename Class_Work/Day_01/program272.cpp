#include<iostream>

using namespace std;

template<class T>
T Summation(T Arr[],int iSize)
{
    int iCnt=0;
    T fSum;
    
    for(iCnt=1,fSum=Arr[0];iCnt<iSize;iCnt++)
    {
        fSum = fSum + Arr[iCnt];
    }
    return fSum;
}

int main()
{
    float Brr[]={10.1,20.2,30.0,40.0,50.0};
    float fRet=0.0f;

    fRet = Summation(Brr,5);

    cout<<"Summation is : "<<fRet<<"\n";

    return 0; 
}