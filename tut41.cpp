#include<iostream>

using namespace std;
class mai
{
    protected:
    int mai;
    public:
    void set_mai(int a){
        mai = a;
    }
};
class tum
{
    protected:
    int tum;
    public:
    void set_tum(int b){
        tum = b;
    }
};
class pagal : public mai,public tum
{
    public:
    void show(){
        cout<<"The value of mai is :"<<mai<<endl;
        cout<<"The value of tum is :"<<tum<<endl;
        cout<<"The value of mai or tum is :"<<mai+tum<<endl;
    }

};

int main()
{
    pagal ritik;
    ritik.set_mai(40);
    ritik.set_tum(60);
    ritik.show();
    
    return 0;
}
// Syntax for inheriting in multiple inheritance
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };
/*
The inherited derived class will look something like this:
Data members:
    mai --> protected
    tum --> protected

Member functions:
    set_mai() --> public
    set_tum() --> public
    set_show() --> public
*/