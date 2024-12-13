#include <iostream>                                      
#include "Student.h"
using namespace std;

class master:public student
{
    public:
    master();
    ~master();
    private:
    string major;
};
master::master():student()
{
    cout << "construction"<< endl;
    cin >> major;
}

master::~master()
{
    cout << num << "," << name << ","<< major << ",~~~" << endl;
}