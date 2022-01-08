#include <iostream>

using namespace std;
class Bankdeposit
{
    int principal;
    int years;
    float rate;
    float simple_interest;

public:
    Bankdeposit(){};
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int R);

    void show();
};
Bankdeposit::Bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = float(r / 100);
    simple_interest = principal;
    for (int i = 0; i < y; i++)
    {
        /* code */
        simple_interest = simple_interest * (1 + rate);
    }
}
Bankdeposit::Bankdeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    rate = R;
    simple_interest = principal;
    for (int i = 0; i < y; i++)
    {
        /* code */
        simple_interest = simple_interest * (1 + rate);
    }
}
void Bankdeposit::show()
{
    cout << "The principal value is " << principal << " , in the " << years << " years at " << rate << " % rate and after getting the details to find simple interest we get simple interest is :" << simple_interest << endl;
}

int main()
{
    Bankdeposit c1,c2;
    int p, y;
    float r;
    int R;
    cout << "Enter the Principal value :" << endl;
    cin >> p;
    cout << "Enter the amount of time in years  :" << endl;
    cin >> y;
    cout << "Enter the rate value :" << endl;
    cin >> r;
    
    c1 = Bankdeposit(p,y,r);
    c1.show();

    cout << "Enter the Principal value :" << endl;
    cin >> p;
    cout << "Enter the amount of time in years  :" << endl;
    cin >> y;
    cout << "Enter the rate value :" << endl;
    cin >> R;
    
    c2 = Bankdeposit(p,y,R);
    c2.show();

    return 0;
}