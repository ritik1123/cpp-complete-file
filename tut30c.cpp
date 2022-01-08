#include<iostream>
#include<math.h>

using namespace std;
class point
{
    int x , y;
    public:
    friend void distance(point ,point );
    point(int a, int b){
        x = a;
        y = b;
    }
    void printdata(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
};
void distance(point o1,point o2){
    double x_diff = o2.x-o1.x;
    double y_diff = o2.y-o1.x;
    double diff = sqrt(pow(x_diff,2)+pow(y_diff,2));
    
    cout<<"Distance between two point in 2d is :"<<diff<<endl;
    

}

int main()
{
    point p1(3,2),p2(7,8);
    p1.printdata();
    p2.printdata();

    cout<<endl;
    distance(p1,p2);
    
    return 0;
}