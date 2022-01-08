#include <iostream>

using namespace std;
template <class T1, class T2>
float avgnumber(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = avgnumber(4, 6.5);
    cout << "The avg of two number is :" << a << endl;

    int y = 5.0, b = 7;

    swapp(y, b);
    cout << a << endl
         << b << endl;
    return 0;
}