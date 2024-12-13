#include<iostream>
using namespace std;

int main()
{
    char a[101];
    cin>>a;
    for(int i=0;a[i]!='\0';i++)  
    {
        if('a'<=a[i]&&a[i]<='z')   
        a[i]=a[i]-32;
        cout<<a[i];
    }    
}
