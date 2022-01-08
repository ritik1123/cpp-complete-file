#include <iostream>

using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student::set_roll_number(int r)
{
    roll_number = r;
}
void student::get_roll_number()
{
    cout << "The roll number of the student is :" << roll_number << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;
    float chemistry;
    float english;
    float computer_science;

public:
    void set_marks(float, float, float, float, float);
    void get_marks(void);
};
void exam::set_marks(float m, float p, float c, float e, float cs)
{
    maths = m;
    physics = p;
    chemistry = c;
    english = e;
    computer_science = cs;
}
void exam::get_marks()
{
    cout << "The math marks of student is :" << maths << endl;
    cout << "The physics marks of student is :" << physics << endl;
    cout << "The chemistry marks of student is :" << chemistry << endl;
    cout << "The english marks of student is :" << english << endl;
    cout << "The computer science marks of student is :" << computer_science << endl;
}
class result : public exam
{

    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "The result of the student is :" << (maths + physics + chemistry + english + computer_science) / 5 << "%" << endl;
    }
};

int main()
{
    result ritik;
    ritik.set_roll_number(1);
    ritik.set_marks(97, 90, 94, 91, 95);
    ritik.display_result();

    return 0;
}