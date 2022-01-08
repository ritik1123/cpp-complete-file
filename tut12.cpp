#include<iostream>

using namespace std;

int main()
{
    int a = 9;
    int *p = &a;
    cout<<"The address of a is :"<<p<<endl;
    cout<<"The address of a is :"<<&a<<endl;
    cout<<"The value of  at address p is :"<<*p<<endl;
    int **q = &p;
    cout<<"The value of p is :"<<&p<<endl;
    cout<<"The value of p is :"<<q<<endl;
    cout<<"The value at address  q is :"<<*q<<endl;
    cout<<"The value at address  value_at(value_at(q)) is :"<<**q<<endl;
    

    return 0;
}