// program to demonstrate use of constructors and destructor
#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;

public:
    Employee() // default constructor
    {
        cout << "Default constructor is called" << endl;
        salary = 50000;
        cout << salary << endl;
    }

    Employee(int s) // parameterised constructor
    {
        salary = s;
        cout << "Parameterised constructor is called" << endl;
        cout << salary << endl;
    }

    Employee(Employee &obj) // copy constructor, &obj=reference object
    {
        salary = obj.salary;
        cout << "Copy constructor is called" << endl;
        cout << salary << endl;
    }

    ~Employee() // destructor
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    Employee e1, e2(60000), e3 = e2;
    return 0;
}
