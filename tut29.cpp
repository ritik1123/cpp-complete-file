#include <iostream>

using namespace std;
class complex
{
    int a, b;

public:
    complex(void);
    void printdata()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void)
{
    a = 9;
    b = 19;
}

int main()
{
    complex c;
    c.printdata();

    return 0;
}