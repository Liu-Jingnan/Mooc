#include<iostream>
using namespace std;
struct Student
{
    string name;
    float Chinese,Math,C;
    int NO;
};
int main()
{
    Student stu[6];
    float Sum[6];
    for(int i=1;i<=5;i++)
    {
        cin>>stu[i].NO>>stu[i].name>>stu[i].Chinese>>stu[i].Math>>stu[i].C;
        Sum[i]=stu[i].Chinese+stu[i].Math+stu[i].C;
    }
    for(int i=1;i<=5;i++)  cout<<stu[i].NO<<','<<stu[i].name<<','<<Sum[i]<<endl;
}