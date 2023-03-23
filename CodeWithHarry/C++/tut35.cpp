#include <iostream>
using namespace std;
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    // Destructors never takes an argument nor does it return any value
    ~num()
    {
        cout << "This is the time when destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main fumction " << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }

    cout << "Exiting out main function" << endl;
    return 0;
}