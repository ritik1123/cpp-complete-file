#include<iostream>

using namespace std;
class simple
{
    int data1, data2, data3;
    public:
    simple (int a,int b = 5,int c = 16){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata();



};
void simple :: printdata(){
    cout<<"The value of data1,data2 and data3 is "<<data1<<" , "<<data2<<" and "<<data3<<" respectively "<<endl;
}

int main()
{
    simple c1(8);
    c1.printdata();
    
    return 0;
}