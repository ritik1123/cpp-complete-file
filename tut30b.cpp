#include<iostream>

using namespace std;
class point
{
    int x,y;
    public:
    point(int a,int b){
        x = a;
        y = b;
    }
    void display(){
        cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
    }
};

int main()
{
    point a(8,9);
    a.display();

    point b(10,19);
    b.display();
    
    return 0;
}