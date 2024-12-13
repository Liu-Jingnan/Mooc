#include<iostream>
using namespace std;

double Sn;
int compare(int b,double n)
{

    Sn=Sn+1/n;
    cout<<Sn<<' '<<n<<' '<<b;
    system("pause");
    if (Sn>b)  
    {
        cout<< n;
        return 0;
    }    
    else if(Sn<=b) return compare(b,n+1);
}

int main()
{
    int k;
    cin>>k;
    compare(k,1);
    system("pause");
}