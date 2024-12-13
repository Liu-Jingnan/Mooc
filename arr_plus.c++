#include <iostream>
using namespace std;

void add( int * a , int * b , int A , int B)
{
    for( int i = A ; i < A+B ; i ++)
    {
        *(a+i) = *(b+i-A);
    }
    delete []b;
}

void swap( int * a , int * b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void rankarr( int * a , int A , int B)
{
    for(int i = 0 ; i < A+B ; i ++)
    {
        for(int j = i+1 ; j < A+B ; j ++) if(a[i] > a[j])  swap(&a[i] , &a[j]);
    }
}

int main()
{
    int A,B;
    cin >> A ;
    int * a = new int[A];
    for ( int i = 0 ; i < A ; i ++ ) cin >> a[i];
    cin >> B ;
    int * b = new int[B];
    for ( int i = 0 ; i < B ; i ++ ) cin >> b[i];
    add(a,b,A,B);
    rankarr(a,A,B);
    for ( int i = 0 ; i < A+B ; i ++ ) cout << a[i] << " ";
    delete []a;
}