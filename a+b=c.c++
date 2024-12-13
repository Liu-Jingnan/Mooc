#include<iostream>
using namespace std;

int judge(int x,int y,int z)
{
    int n=x+y;
    if(z==n)  cout<<"Right!"<<endl;
    else cout<< "Wrong!"<<endl;
    return 0;
}

int main()
{
    int T;
    cin>>T;
    char A,B;
    int a[T+1],b[T+1],c[T+1];
    for (int i = 0; i < T; i++)
    cin>>a[i]>>A>>b[i]>>B>>c[i]; 
    for (int i = 0; i < T; i++)
    judge(a[i],b[i],c[i]);
}