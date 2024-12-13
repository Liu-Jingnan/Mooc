#include<iostream>
using namespace std;
int main()
{
    int a,b,c,k;
    cin>>k;
    if(0<=k&&k<=9)
    {
        for(int i=100;i<=500;i++)
        {
            a=i/100;
            b=i-100*a;
            b=b/10;
            c=i-100*a;
            c=c-10*b;
            if(k==a+b+c)
            {
                cout<<i<<endl;
            }
        }
    }
    
}