#include<iostream>

using namespace std;
class Employee
{
    public:
    int id ;
    float salary = 58.49;
    Employee (int inpid){
        id  = inpid;
        salary  = 58.49;

    }
    Employee(){}

};
class programmer : public Employee
{
    public:
    programmer(int inpid){
        id  = inpid;
        salary = 58.49;

    }
    void getdata(){
        cout<<id<<endl;
    }

};

int main()
{
    Employee ritik(1),kajal(2);
    cout<< ritik.salary<<endl;
    cout<< kajal.salary<<endl;
    programmer ritu(10);
    ritu.getdata();
    cout<<ritu.id<<endl;
    cout<<ritu.salary<<endl;
    
    return 0;
}