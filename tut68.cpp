#include<iostream>

using namespace std;
template <class T>
class ritik{
    public:
    T data1;
    ritik (T a){
        data1 = a;
    }
    void display();
};
template <class T>
void ritik<T>:: display(){
    cout<<"The value of a is : "<<data1<<endl;
}
template <class T>
void func(T a){
    cout<<"The value of func a is : "<<a<<endl;
}




int main()
{
    ritik<int>r(5);
    r.display();

    func(9);
    
    return 0;
    //112 
}