#include<iostream>

using namespace std;

float Summation(float Arr[],int iSize)
{
    int iCnt=0;
    float fSum=0.0f;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        fSum = fSum + Arr[iCnt];
    }
    return fSum;
}

int main()
{
    float Brr[]={10.0,20.0,30.0,40.0,50.0};
    float fRet=0.0f;

    fRet = Summation(Brr,5);

    cout<<"Summation is : "<<fRet<<"\n";

    return 0; 
}