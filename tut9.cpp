#include<iostream>

using namespace std;

int main()
{
    // cout<<"Ritik kumar";
    int age ;
    cout<<"Enter your age"<<endl;
    cin>>age;
    //*********** If else if ladder**********
    // if(age<18){
    //     cout<<"You are not allowed to drive the drive the car"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are allowed to make driving licence and after that you can drive the car"<<endl;

    // }
    // else{
    //     cout<<"You are allowed to drive the car"<<endl;
    // }

    // ******************Switch case statement************
    switch (age)
    {
    case 18:
        /* code */
        cout<<"You are 18 years old"<<endl;
        break;
    case 34:
        /* code */
        cout<<"You are 34 years old"<<endl;
        break;
    case 37:
        /* code */
        cout<<"You are 37 years old"<<endl;
        break;
    
    default:
    cout<<"No above cases are present here"<<endl;
        break;
    }
    cout<<"Mai pagal hu"<<endl;

    
    return 0;
}