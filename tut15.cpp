#include<iostream>

using namespace std;
// Function prototype
int sum(int a,int b );
// function call
int main()
{
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum of two number is "<<sum(num1,num2)<<endl;

    
    return 0;
}
// function defination
int sum(int a, int b){
    int c = a+b;
    return c;
}
