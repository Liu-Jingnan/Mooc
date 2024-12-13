#include<iostream>
using namespace std;
int main()
{
    int a,b,c,Max;
    cin>>a>>b>>c;
    Max=a;
    if(Max<=b)   Max=b;
    if(Max<=c)   Max=c;
    cout<<Max;
}