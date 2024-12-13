#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(0<=a&&0<=b&&0<=c&&0<=d&&255>=a&&255>=b&&255>=c&&255>=d)
    printf("%02x%02x%02x%02x",a,b,c,d);
    system("pause");
    return 0;
}