#include<iostream>

using namespace std;
class Employee
{
    int id;
    int salary;

    public:
    void setid(void){
        cout<<"Enter the employee id"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"The id of the Employee is : "<<id<<endl;
    }
};

int main()
{
    // Employee ritik;

    // ritik.setid();
    // ritik.getid();
    Employee r[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        r[i].setid();
        r[i].getid();
    }
    
    
    return 0;
}