#include<iostream>
using namespace std;
/*int main()
{
   int f,x;
   f=10;
   cin>>x;
   for(int i=2;i<=x;i++)   f=f+2;
   cout<<f;
   system("pause");
}*/
int f(int x ,int n = 1 , int F = 10 )
{
   if(n==x)  
   {
      cout << F;
      return F;
   }
   F= F+2;
   return  f(x,n+1,F);
}

int main()
{
   int a;
   cin>>a;
   f(a);
}