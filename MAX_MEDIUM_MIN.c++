#include<iostream>
using namespace std;
/*int main()
{
    int a,b,c,Max,Med,Min;
    cin>>a>>b>>c;
    Max=a;
    Med=b;
    Min=c;
    if(Max<=b)   
    {
        Med=Max;
        Max=b;
    }
    if(Max<=c)   
    {
        Min=Max;
        Max=c;
    }
    if(Med<=Min)
    {
        int  d=Min;
        Min=Med;
        Med=d;
    }    
    cout<<Max<<','<<Med<<','<<Min;
}*/
int main()
{
	int i = 0, max, min, mid;
	int num[3];

for(;i<=2;i++)
{
	cin >> num[i];
}	
    max = num[0];
	min = num[0];
	mid = num[0];

for(i=0;i<=2;i++)
{		
    if (min > num[i])
	min = num[i];
	if (max < num[i])
	max = num[i];
}
for(i=0;i<=2;i++)
{
    if(max!=num[i]&&min!=num[i])
    mid=num[i];
}
cout<<min<<","<<mid<<","<<max;
return 0;
}