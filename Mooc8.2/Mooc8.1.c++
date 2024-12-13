#include<iostream>                                                              
#include"Student.h"
#include"Master.h"
using namespace std;

int main()
{
    student *a;
    master b;
    a = &b;
    a->pr();
    return 0;
}