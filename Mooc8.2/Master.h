#include <iostream>                                      
#include "Student.h"
using namespace std;

class master:public student
{
    public:
    master();
    void pr();
    private:
    string major;
};
master::master():student()
{
    cout << "construction"<< endl;
    cin >> major;
}

void master::pr()
{
    cout << num << "," << name << ","<< major << endl;
}