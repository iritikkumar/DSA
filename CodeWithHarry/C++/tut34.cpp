#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own constructor
    Number(Number &obj)
    {
        cout << "Copy constructor is called!!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);    
    z1.display();       // copy  constructor is invoked

    z2 = z;
    z2.display();       //copy constructor is not invoked

    Number z3 = z;      // copy  constructor is invoked
    z3.display();

    return 0;
}