#include<iostream>

using namespace std;
class base
{
public:
    int var_base;
    virtual void display()
    {
        cout << endl
             << endl;
        cout << "1 Displaying the base class of var_base : " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "2 Displaying the base class of var_base : " << var_base << endl;
        cout << endl
             << endl;
        cout << "2 Displaying the derived class of var derived : " << var_derived << endl;
        cout << endl
             << endl;
    }
};

int main()
{
    base *base_class_pointer;
    base obj_base;
    derived obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base=70;
    base_class_pointer->display();
    
    return 0;
}