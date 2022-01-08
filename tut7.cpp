#include<iostream>

using namespace std;

int c = 93939;

int main()
{
    // // **************Build in data types in cpp
    // // int a , b , c;

    // // cout<<"Enter the value of a:"<<endl;
    // // cin>>a;
    // // cout<<"enter the value of b:"<<endl;
    // // cin>>b;
    // // c= a+b;
    // // cout<<"The sum of a and b is :"<<c<<endl;
    // // cout<<"The global c is :"<<::c<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    //*************Float,double and long double litrals**************

    // float d = 34.4f;
    // long double e = 34.4l;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;
    //**************Reference variable************
    // float r = 65;
    // float &y = r;
    // cout<<r<<endl;
    // cout<<y<<endl;
    //*********Typecasting***************
    int  a= 33;
    float b = 58.43;
    cout<<"The value of a is "<<(float)a<<endl;
    
    cout<<"The value of a is "<<float(a)<<endl;
    
    cout<<"The value of b is "<<(int)b<<endl;
    
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    
    

    
    return 0;
}