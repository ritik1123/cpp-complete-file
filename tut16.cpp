#include<iostream>

using namespace std;
int sum (int a,int b){
    int c = a+b;
    return c;
}
void swap(int a, int b){
    int temp =a;
    a=b;
    b= temp;
}
void swapPointer(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b= temp;
}
int & swapReferenceVar(int &a, int &b){
    int temp =a;
    a=b;
    b= temp;
    return a;
}

int main()
{
    int a = 5, b = 8;
    cout<<"The sum of two number is "<<sum(a,b)<<endl;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(a,b);
    // This will not swap because a and b are actual parameter so this will not effect the value of the code.
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swapPointer(&a,&b);//This will swap a and  b by call by refernce using pointer
    swapReferenceVar(a,b) = 766;//This will swap a and b by call by reference using reference variable
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    
    return 0;
}