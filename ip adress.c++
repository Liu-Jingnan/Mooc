#include <iostream>
using namespace std;
int main()
{
    int a,c,d,e,f,g,m,n,q;
    double b;
    cin>>a>>m>>n>>q;
    for(int z=1;z<=4;z++)
    {
        switch(z)
        {
            case 1:g=a;break;
            case 2:g=m;break;
            case 3:g=n;break;
            case 4:g=q;break;
        }
        if(0<=g&&g<=255) 
        {
            b=g;
            c=g;    
            int i=0;
            for(;b>=1;)
                {
                b=b/16;
                i++;
                }
            int A[i]={0};
            for(int m=1;m<=i;m++)
            {
                if(c!=0)
                {
                    f=1;
                    e=i-m;
                    for(int q=1;q<=e;q++)  f=f*16;
                    if (c>=f)  
                    {
                        int h=c/f;
                        A[m]=(int)h;
                        c=c%f;
                    }  
                    switch (A[m])
                    {
                        case 10:   A[m]=(char)'a';  printf("%c",A[m]);  break;
                        case 11:   A[m]=(char)'b';  printf("%c",A[m]);  break;   
                        case 12:   A[m]=(char)'c';  printf("%c",A[m]);  break;      
                        case 13:   A[m]=(char)'d';  printf("%c",A[m]);  break;  
                        case 14:   A[m]=(char)'e';  printf("%c",A[m]);  break;   
                        case 15:   A[m]=(char)'g';  printf("%c",A[m]);  break;                                         
                        default:
                               printf("%d",A[m]);
                               break;
                    }
                }
                else if(c==0)  printf("0");
            }
        }
    }
    system("pause");
    return 0;
}
