#include<iostream>

using namespace std;
typedef struct enployee
{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep;

union money
{
    /* data */
    int rice;
    int car;
    float pounds;
};



int main()
{
    enum Meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    
    cout<<lunch<<endl;
    
    cout<<dinner<<endl;
    // union money m1;
    // m1.rice = 34;
    // cout<<m1.rice;
    // ep Ritik;
    // Ritik.eId = 1;
    // Ritik.favChar = 'c';
    // Ritik.salary = 382492437;
    // cout<<"The value is "<<Ritik.eId<<endl;
    // cout<<"The value is "<<Ritik.favChar<<endl;
    // cout<<"The value is "<<Ritik.salary<<endl;
    
    
    return 0;
}