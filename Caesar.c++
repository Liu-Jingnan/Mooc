#include<iostream>
#include<string>
using namespace std;
#include<ctype.h>
int main()
{
    int N;
    string code;
    cin>>N>>code;
    for(int i=0;i<=20;i++)
    {
        if(code[i]>='A'&&code[i]<='Z')
        {
            code[i]=code[i]+N;
            if('Z'<code[i])
            code[i]=code[i]-26;
        }
        else ;
    }
    cout<<code;
    system("pause");
}