#ifndef STUDENT_H                                    
#define STUDENT_H

#include <iostream>
using namespace std;

class student
{
    public:
    student(int n = 2021001, string nam = "Lili", int a = 19, double s =89.5);
    ~student();
    protected:
    int num;
    string name;
    int age;
    double score;
};

student::student(int n , string nam , int a ,double s )
{
    num = n;
    name = nam;
    age = a;
    score = s;
}

student::~student()
{
    cout << num << "," << name << ",~~~" <<endl;
}
#endif // STUDENT_H