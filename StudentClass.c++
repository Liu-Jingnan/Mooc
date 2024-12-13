#include<iostream>
using namespace std;

class Stu
{
    public :
    Stu(int num=2021001 ,string name = "Lili",int age = 19,float mark = 89.5);
    ~Stu();
    private :
    int student_num  , age  ;
    string name  ;
    float mark  ;
};

Stu::Stu(int a, string b, int c, float d)
{
    student_num = a;
    name = b;
    age = c;
    mark = d;
}

Stu::~Stu()
{
    cout << student_num << ',' << name << ',' << "~~~"  << endl;
}

int main()
{
    Stu student1;
    int a,c;
    string b ;
    float d ;
    cin >> a >> b >> c >> d ;
    Stu student2(a,b,c,d);
}