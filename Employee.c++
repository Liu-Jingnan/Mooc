#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
    string name;
    int year , month , day , wage;
    public:
    Employee(string , int , int , int ,int );
    void total_wage( int y_now , int m_now)
    {
        int total =wage*((y_now-year)*12+(m_now-month)) ;
        cout << total << endl;
    }
};

Employee::Employee(string n , int w , int y , int m , int d)
{
    name = n ;
    wage = w ;
    year = y ;
    month = m ;
    day = d ;
}

int main()
{
    int a , y , m;
    Employee em[5]={ Employee("wang",5000,2000,10,23) ,
                     Employee("liu",4500,2008,1,20) ,
                     Employee("huo",3800,2003,7,3) ,
                     Employee("ma",5300,2015,4,10) ,
                     Employee("meng",6000,2016,3,16) };
    cin >> a >> y >> m;
    cout << a << ' ';
    em[a-1].total_wage( y , m );
}