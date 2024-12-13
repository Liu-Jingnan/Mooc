/*#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int N,b;
    double sum=0;
    cin>>N>>b;
    if(0<N&&N<=10)
    {
        int Mark[N+1]={0};
        for(int i=0;i<N;i++)    
        {
            cin>>Mark[i];
            if(1<=Mark[i]&&Mark[i]<=9)   ;
            else return 0;
        }    
        for(int i=0;i<N;i++)    
        {
            for(int j=i+1; j<N;j++)
            {
                if(Mark[i]<=Mark[j])   swap(&Mark[i],&Mark[j]);
            }
        }
        for(int i=b;i< N-b;i++)  sum=sum+Mark[i];
        sum=sum/(N-2*b);
        printf("%.2f",sum);
    }    
    system("pause");
}*/
/*#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int b, max = 0, min = 0,q=1;
	int N;
    double sum=0;
	cin >> N;
	int* a = new int[N+1];
	for (int i = 0;i <= N;i++)
	{
		cin >> a[i];
	}

	for (int j = 1 ;j < N;j++)
	{
		if (  a[j] >=   a[max])
		{
			max = j;
		}
		if (  a[j] <=  a[min])
		{
			min = j;
		}
	}
	while (q <= N)
	{
		sum += a[q];
	}
	int score;
	score = (sum-a[max]-a[min]) / (N - 2);
	cout << fixed << setprecision(2) << score << endl;
    delete[] a;
    return 0;

}*/
#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    double sum1=0,sum2=0;
    int Mark[11]={0};
    for(int i=0;i<10;i++)    cin>>Mark[i];    
    for(int i=0;i<10;i++)    for(int j=i+1; j<10 ;j++)     if(Mark[i]<=Mark[j])   swap(&Mark[i],&Mark[j]);
    for(int i=1;i< 9;i++)  sum1=sum1+Mark[i];
    sum1 /= 8;
    for(int i = 2 ; i < 8 ; i ++)    sum2=sum2+Mark[i];
    sum2 /= 6;
    printf("%g %g",sum1,sum2);    
}