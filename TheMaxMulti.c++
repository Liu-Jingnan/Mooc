#include<iostream>
using namespace std;

int main()
{
    int N,M,n;
    cin>>N>>M;
    n=N%M;
    int a[M+1];    
    for(int i=0;i<=M-1;i++)
    {
        if(i<=M-n-1)  a[i]=N/M;
        else a[i]=N/M+1;
        cout<<a[i]<<' ';
    }
    
}