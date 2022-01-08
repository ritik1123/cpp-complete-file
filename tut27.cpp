#include <iostream>

using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};
class complex
{
    int a, b;

public:
    // friend int calculator::sumrealcomplex(complex o1, complex o2);
    // friend int calculator::sumcompcomplex(complex o1, complex o2);
    friend class calculator;
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setnumber(4, 6);
    c1.printnumber();

    c2.setnumber(5, 8);
    c2.printnumber();

    calculator c3;
    int plus = c3.add(5, 9);
    cout << "The sum of 5 and 9 is :" << plus << endl;
    

    int res = c3.sumrealcomplex(c1, c2);
    cout << "The real number of complex is :" << res << endl;
    int resc = c3.sumcompcomplex(c1,c2);
    cout << "The complex number of complex is :" << resc << endl;

    

    return 0;
}