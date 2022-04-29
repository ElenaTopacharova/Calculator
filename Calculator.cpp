
#include <iostream>
#include <math.h>

using namespace std;

float a, b;

class Calculator
{

public:
    float add()
    {
        return a + b;
    }

    float sub()
    {
        return a - b;
    }

    float mul()
    {
        return a * b;
    }

    float div()
    {
        if (b == 0)
        {
            cout << "Division By Zero" <<  endl;
            return INFINITY;
        }
        else
        {
            return a / b;
        }
    }
};

int main()
{
    int ch;

    Calculator c;

    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    cout << "Enter 1: a + b" << endl;
    cout << "Enter 2: a - b" << endl;
    cout << "Enter 3: a * b" << endl;
    cout << "Enter 4: a / b" << endl;
    cout << "Enter 0 To Exit" << endl;

    do
    {
        cout << "\n Enter Choice: ";
        cin >> ch;
        switch (ch)
        {
            case 1:
                cout << "Result: " << c.add() << endl;
                break;
            case 2:
                cout << "Result: " << c.sub() << endl;
                break;
            case 3:
                cout << "Result: " << c.mul() << endl;
                break;
            case 4:
                cout << "Result: " << c.div() << endl;
                break;
        }
    } 
    while (ch >= 1 && ch <= 4);

    return 0;
}
