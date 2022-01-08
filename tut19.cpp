#include<iostream>

using namespace std;
int sum(float a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}

int volume(double r,int h){
    return(3.14*r*r*h);
}

int volume(int a){
    return(a*a*a);
}
int volume(int l,int b,int h){
    return(l*b*h);
}

int main()
{
    cout<<"the sum of a anf b is "<<sum(5,10)<<endl;
    cout<<"The sum of a,b and c is "<<sum(9,15,56)<<endl;
    cout<<"The volume of cylinder  is "<<volume(9,15)<<endl;
    cout<<"The volume of cube is "<<volume(9)<<endl;
    cout<<"The volume of cuboid is "<<volume(9,15,56)<<endl;
    return 0;
}