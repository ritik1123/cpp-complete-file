#include <iostream>

using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base ::setdata(void)
{
    data1 = 30;
    data2 = 50;
}
int base ::getdata1()
{
    return data1;
}
int base ::getdata2()
{
    return data2;
}

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};
void derived::process()
{
    data3 = data2 * getdata1();
}
void derived::display()
{
    cout << "The value of data1 is :" << getdata1() << endl;
    cout << "The value of data2 is :" << data2 << endl;
    cout << "The value of data3 is :" << data3 << endl;
}

int main()
{
    derived d;
    d.setdata();
    d.getdata1();
    d.getdata2();
    d.process();
    d.display();

    return 0;
}