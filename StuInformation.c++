#include <iostream>
using namespace std;

class Stu
{
    public :
    Stu(int num=2021001 ,string name = "Lili",int age = 19,float mark = 89.5);
    void print();
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

void Stu::print()
{
    cout << student_num << ',' << name << ',' << age << ',' << mark << endl;
}

void print(Stu a)
{
    a.print();
}

int main()
{
    Stu student;
    student.print();
    print(student);
}