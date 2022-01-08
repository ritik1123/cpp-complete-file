#include <iostream>
#include <string>

using namespace std;
template <class T1 = int, class T2 = float, class T3 = char, class T4 = string>
class Ritik
{
public:
    T1 a;
    T2 b;
    T3 c;
    T4 d;
    Ritik(T1 w, T2 x, T3 y, T4 z)
    {
        a = w;
        b = x;
        c = y;
        d = z;
    }
    void display()
    {
        cout << "The value of a is : " << a << endl;

        cout << "The value of b is : " << b << endl;

        cout << "The value of c is : " << c << endl;

        cout << "The value of d is : " << d << endl;
    }
};

int main()
{
    Ritik<> f(2, 1.6, 'r', "ritik");
    f.display();
    cout<<endl;
    Ritik<float,float,string,string>g(1.96,1.58,"RITIK","KUMAR");
    g.display();

    return 0;
}