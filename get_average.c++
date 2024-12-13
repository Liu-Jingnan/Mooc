#include<iostream>
using namespace std;

double get_average(int * q , int size)
{
    double sum = 0.0 ;
    int i ;
    for(i = 0 ; i < size ; i ++)    sum += q[i];
    return sum/size;
}

int main()
{
    int a[5]={0},b[2][3]={0};
    int* q= b[0] ;
    int size_a =sizeof(a)/4 ,size_b = sizeof(b)/4;
    for(int i = 0 ; i < 5 ; i ++) cin >> a[i];
    for(int i = 0 ; i < 6 ; i ++) cin >> q[i];
    cout<<get_average(a , size_a)<<' '<<get_average(b[0] , size_b);
}