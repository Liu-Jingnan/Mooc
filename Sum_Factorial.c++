#include<iostream>
using namespace std;

int n_(int n ,int sum, int m)
{
    if(n==m)
        return sum*n;
    else
        return sum*n+n_(n+1,sum*n , m);    
}

int main()
{
    int n;
    cin >> n;
    cout <<  n_( 1 , 1 , n) << endl;
}