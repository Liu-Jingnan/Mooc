#include<stdio.h>
#define pi 3.1415926535
int main()
{   
    int r;
    double S0,V0;
    scanf("%d",&r) ;   
    if(1<=r&&r<=100)
    {
        S0=pi*r*r;
        V0=pi*r*r*r*4/3;
        printf("%.2f\n%.2f\n",S0,V0);
    }
    return 0;
}
