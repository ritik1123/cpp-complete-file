#include <iostream>

using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_number(int r)
    {
        roll_no = r;
    }
    void print_number()
    {
        cout << "Your roll number is : " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths;
    float physics;
    float chemistry;
    float english;
    float computer_science;

public:
    void set_marks(float m, float p, float c, float e, float cs)
    {
        maths = m;
        physics = p;
        chemistry = c;
        english = e;
        computer_science = cs;
    }
    void print_marks()
    {
        cout << "Your maths marks is :" << maths << endl;
        cout << "Your physics marks is : " << physics << endl;
        cout << "Your chemistry marks is : " << chemistry << endl;
        cout << "Your english marks is : " << english << endl;
        cout << "Your computer science marks is : " << computer_science << endl;
    }
    void percent_marks()
    {
        cout << "Your percentage is :" << (maths + physics + chemistry + english + computer_science) / 5 << endl;
    }
};
class Sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void print_score()
    {
        cout << "Your Physical training score is :" << score << endl;
    }
};
class result : public Test, public Sports
{
protected:
    float total;

public:
    void display()
    {
        total = maths + physics + chemistry + english + computer_science + score;
        print_number();
        print_marks();
        percent_marks();
        print_score();
        cout << "Your total marks is : " << total << endl;
    }
};

int main()
{
    result ritik;
    ritik.set_number(7);
    ritik.set_marks(81, 94, 76, 75, 82);
    ritik.set_score(7);
    ritik.display();

    return 0;
}