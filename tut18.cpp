#include<iostream>

using namespace std;
int factorial(int n){
    if (n<=1)
    {
        /* code */
        return 1;
    }
    
    return n* factorial(n-1);
}
int fib(int n){
    if (n<2)
    {
        /* code */
        return 1;
    }
    else
    {
        return fib(n-2) + fib(n-1);
    }
    
    
}

int main()
{
    // Factorial of a number
    int a;
    cout<<"Eter a number"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<"is : "<<factorial( a)<<endl;
    cout<<"The fibonacci of "<<a<<"is : "<<fib( a)<<endl;
    return 0;
}