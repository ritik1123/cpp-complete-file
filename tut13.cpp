#include<iostream>

using namespace std;

int main()
{
    int i=0, marks[5] = {98,94,67,87,76};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     /* code */
    //     cout<<"The value of marks is :"<<marks[i]<<endl;
    // }
    // while (i<5)
    // {
    //     /* code */
    //     cout<<"The value of marks is :"<<marks[i]<<endl;
    //     i++;
        
    // }
    // do
    // {
    //     /* code */
    //     cout<<"The value of marks is :"<<marks[i]<<endl;
    //     i++;
    // } while (i<5);
    // ******pointer and array in cpp****
    int *p = marks ;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    // cout<<"The value of marks[0] is :"<<*p<<endl;
    // cout<<"The value of marks[1] is :"<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is :"<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is :"<<*(p+3)<<endl;
    // cout<<"The value of marks[4] is :"<<*(p+4)<<endl;
    
    
    
    return 0;
}