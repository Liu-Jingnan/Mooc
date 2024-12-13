#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int a[2][N+1];
    for(int i=0 ; i < 2 ; i ++)        for(int j = 0 ; j < N ; j ++)       cin>>a[i][j];
    double distance=0.0;
    for(int i=0 ; i < N ; i ++) distance += (a[0][i]-a[1][i])*(a[0][i]-a[1][i]);
    distance = sqrt(distance);
    cout << fixed << setprecision(2)  << distance;
}