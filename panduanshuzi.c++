#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(1<=x&&x<=400)
    {
        if(100<=x&&x<=200)   cout<<"yes";
        else cout<<"no";
    }
    return 0;
}