#include <iostream>

using namespace std;
class Base1
{
    int data1;

public:
    Base1(int x)
    {
        data1 = x;
        cout << endl;
        cout << "Base1 constructor is invoked " << endl;
    }
    void printBase1()
    {
        cout << endl;
        cout << "The value of data 1 is : " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int y)
    {
        data2 = y;
        cout << endl;
        cout << "Base2 constructor is invoked " << endl;
    }
    void printBase2()
    {
        cout << endl;
        cout << "The value of data 2 is : " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int Derived1;
    int Derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        Derived1 = c;
        Derived2 = d;
        cout << endl;
        cout << "Derived class is invoked" << endl;
    }
    void printderived()
    {
        cout << endl;
        cout << "The value of Derived 1 is : " << Derived1 << endl;
        cout << endl;
        cout << "The value of Derived 2 is : " << Derived2 << endl;
        cout << endl;
    }
};
int main()
{
    Derived Ritik(2, 5, 7, 9);
    Ritik.printBase1();
    Ritik.printBase2();
    Ritik.printderived();

    return 0;
}