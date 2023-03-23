#include <iostream>
#include <math.h>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

//              ------------------->    SimpleCalculator     <-------------------                 //

class SimpleCalculator
{
protected:
    float a, b, output;
    int ope;

public:
    void setnumbers(float, float);
    void instructions(void);
    void operation();
    void displayresult(void);
};
void SimpleCalculator ::setnumbers(float x, float y)
{
    a = x;
    b = y;
}
void SimpleCalculator ::instructions(void)
{
    cout << "Press 1 for addition" << endl;
    cout << "Press 2 for subtraction" << endl;
    cout << "Press 3 for multiplication" << endl;
    cout << "Press 4 for division" << endl;
    cin >> ope;
}

void SimpleCalculator ::operation()
{

    switch (ope)
    {
    case 1:
        output = (a + b);
        break;

    case 2:
        output = (a - b);
        break;

    case 3:
        output = (a * b);
        break;

    case 4:
        output = float(a / b);
        break;

    default:
        cout << "Wrong Choice" << endl;
        break;
    }
}
void SimpleCalculator ::displayresult(void)
{
    operation();
    cout << "Your output is: " << output << endl;
}
//              ------------------->    ScientificCalculator     <-------------------                 //

class ScientificCalcluator
{
protected:
    float a, b, output;
    int ope;

public:
    void setnumbers(float, float);
    void instructions(void);
    void operation();
    void displayresult(void);
};
//              ------------------->    HybridCalculator     <-------------------                 //

class HybridCalculator : public SimpleCalculator, public ScientificCalcluator
{
};

int main()
{
    float num1, num2;
    SimpleCalculator s;
    cout << "Enter the two numbers: " << endl;
    cin >> num1 >> num2;

    s.setnumbers(num1, num2);
    s.instructions();
    s.displayresult();

    return 0;
}