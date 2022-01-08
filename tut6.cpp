#include<iostream>
#include"ritik.h"

using namespace std;

int main()
{
    int a = 10,b = 15;
    cout<<"Hello world"<<endl;
    cout<<"Types of operator in cpp"<<endl;
    // Arthematic operator
    cout<<"The sum of a and b is :"<<a+b<<endl;

    cout<<"The sub of a and b is :"<<a-b<<endl;

    cout<<"The multiplication of a and b is :"<<a*b<<endl;

    cout<<"The division of a and b is :"<<a/b<<endl;
    
    cout<<"The value of a and b is :"<<a%b<<endl;
    
    cout<<"The value of a ++ is :"<<a++<<endl;
    
    cout<<"The value of ++ a is :"<<++a<<endl;
    
    cout<<"The value of a -- is :"<<a--<<endl;

    cout<<"The value of -- a is :"<<--a<<endl;
    cout<<endl;
    //Assignment operator --> used to assign the value to variable
    //int a = 3, b =5;
    //char c = 'u';
    //  Comparision operator -> Used to compare between two variable
    cout<<"Comparision operator"<<endl;
    cout<<"The value of a==b is :"<<(a==b)<<endl;
    cout<<"The value of a!=b is :"<<(a!=b)<<endl;
    cout<<"The value of a<=b is :"<<(a<=b)<<endl;
    cout<<"The value of a>=b is :"<<(a>=b)<<endl;
    cout<<"The value of a>b is :"<<(a>b)<<endl;
    cout<<"The value of a<b is :"<<(a<b)<<endl;
    cout<<endl;
    //Logical operator
    cout<<"Logical operator"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a>b))   is :"<<((a==b) && (a>b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b))   is :"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b))   is :"<<(!(a==b))<<endl;
    return 0;
}