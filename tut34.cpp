#include <iostream>

using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    };
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout << "Copy constructor invoked" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The Object of the number is :" << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z3;
    x.display();
    y.display();
    z.display();
    Number z2(z);
    z2.display();
    z3 = z; //no copy constructor invoked

    return 0;
}