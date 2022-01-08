#include<iostream>

using namespace std;
class y;
class x
{
    int a;
    
    public:
    void setdata(int data){
    a = data;
    }
    friend void sumdata(x,y);
    // void printdata(){
    //     cout<<"The data of setdata is "<<a<<endl;
    // }
};
class y
{
   int b;
    public:
    
    void setdata(int entry){
    b = entry;
    } 
    friend void sumdata(x,y);
};
void sumdata(x a1,y b1){
    cout<<"After sum of two number we get  : "<<a1.a + b1.b<<endl;
}

int main()
{
    x c1;
    c1.setdata(8);

    y c2;
    c2.setdata(9);


    sumdata (c1,c2);
    

    
    return 0;
}