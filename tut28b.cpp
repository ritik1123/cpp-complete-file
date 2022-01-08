#include<iostream>

using namespace std;
class num2;
class num1
{
    int a ;
    friend void exchange(num1 &x,num2 &y);
    public:
    void setdata(int val1){
        a = val1;
    }
    void printdata(void){
        cout<<a<<endl;
    }
};
class num2
{
    int b ;
    friend void exchange(num1 &x,num2 &y);
    public:
    void setdata(int val2){
        b = val2;
    }
    void printdata(void){
        cout<<b<<endl;
    }
};
void exchange (num1 &x,num2 &y){
    int temp = x.a;
    x.a = y.b;
    y.b = temp;

}

int main()
{
    num1 c1;
    c1.setdata(34);
    c1.printdata();

    num2 c2;
    c2.setdata(91);
    c2.printdata();

    exchange (c1,c2);
    cout<<"The number after swapping of a is : "<<endl;
    c1.printdata();
    cout<<"The number after swapping of b is :"<<endl;
    c2.printdata();
    
    return 0;
}