#include<iostream>

using namespace std;

int glo = 9;
void sum(){
    int a;
    cout<<glo<<endl;
}

int main()
{
    int glo = 8;
    int a = 4;
    int b = 7;
    float pi = 3.14;
    char c = 'u';
    bool is = true;
    sum();
    cout<<glo<<is;
    // cout<<"This is data type tutorial"<<endl<<"The value of a is :"<<a<<endl<<"The value of b is :"<<b<<endl<<"The value of pi is :"<<pi<<endl<<"The value of c is :"<<c;

    return 0;
}