#include <iostream>

using namespace std;
class base
{
public:
    int var_base;
    void display()
    {
        cout << endl
             << endl;
        cout << "Displaying the base class of var_base : " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying the base class of var_base : " << var_base << endl;
        cout << endl
             << endl;
        cout << "Displaying the derived class of var derived : " << var_derived << endl;
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
    base_class_pointer->var_base = 56;
    base_class_pointer->display();
    cout << endl
         << endl;
    base_class_pointer->var_base = 56;
    base_class_pointer->display();
    cout << endl
         << endl;
    // base_class_pointer = &obj_derived;
    // base_class_pointer-> var_derived = 202;
    // base_class_pointer->display();
    

    derived *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 90;

    derived_class_pointer->var_derived = 108;
    derived_class_pointer->display();

    return 0;
}