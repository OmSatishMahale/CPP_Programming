#include<iostream>

using namespace std;

template<class T>
T Maximum(T Arr[],int iSize)
{
    int iCnt=0;
    T fMax;
    fMax = Arr[0]; 
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(fMax<Arr[iCnt])
        fMax = Arr[iCnt];
    }
    return fMax;
}

int main()
{
    float Brr[]={10.1,20.2,30.0,40.0,50.0};
    float fRet=0.0f;

    fRet = Maximum(Brr,5);

    cout<<"Maximum is : "<<fRet<<"\n";

    return 0; 
}