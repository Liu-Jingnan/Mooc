#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a,c,d,e,f,g;
    double b;
    while(1){
    cout<<"输入数值"<<endl;
    cin>>a; 
    b=a;
    c=a;    
    cout<<"你想得到几进制"<<endl;
    cin>>g;
        int i=0;
    for(;b>=1;)
    {
        b=b/g;
        i++;
    };
    int A[i]={0};
    for(int m=1;m<=i;m++)
    {
        if(c!=0)
        {
        f=1;
        e=i-m;
        for(int q=1;q<=e;q++)  f=f*g;
        if (c>=f)  
        {
           int h=c/f;
           A[m]=(int)h;
           c=c%f;
        }
        switch (A[m])
        {
            case 10:   A[m]=(char)'A';                                        
            printf("%c",A[m]);
            break;
            case 11:   A[m]=(char)'B';                                          
            printf("%c",A[m]);
            break;         
            case 12:   A[m]=(char)'C';                                         
            printf("%c",A[m]);
            break;      
            case 13:   A[m]=(char)'D';                                          
            printf("%c",A[m]);
            break;
            case 14:   A[m]=(char)'E';                                          
            printf("%c",A[m]);
            break; 
            case 15:   A[m]=(char)'G';                                         
            printf("%c",A[m]);
            break;
        default:
            printf("%d",A[m]);
            break;
        }}
        else if(c==0) printf("0");
    }
    cout<<endl;
    char B;
    cout<<"键入g以继续";
    cin>>B;
    if(B!='g')   return  0;
    }
}