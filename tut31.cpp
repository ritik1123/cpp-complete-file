#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int x, int y = 5)
    {
        a = x;
    }
    void print()
    {
        cout << a << "+" << b << "i" << endl;
    }
};
void main()
{
    Complex c(4);
    c.print();
}