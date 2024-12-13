#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    for(int i = 1 ; i <= n;i++)
    {
        int m = i;
        do
        {
            if(m%10==2 || m%10==0 || m%10==1 || m%10==9)
            {
                sum+=i;
                break;
            }
            m=m/10;
        } while(m!=0);
        
    }
    cout<<sum;
}