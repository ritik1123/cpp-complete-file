#include <iostream>

using namespace std;
class complex
{
    int real;
    int imagnery;

public:
    void printdata()
    {
        cout << "The real part is : " << real << endl;
        cout << "The imagnery part is : " << imagnery << endl;
    }
    void setdata(int r, int i)
    {
        real = r;
        imagnery = i;
    }
};

int main()
{
    complex ritik;
    //   complex *ptr = &ritik;
    complex *ptr = new complex;
    (*ptr).setdata(50, 100);
    (*ptr).printdata();
    return 0;
}