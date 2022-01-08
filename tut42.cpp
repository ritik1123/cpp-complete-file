/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    Ans. This is done from line number 23 to 46. 
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.
    Ans. This is done from line no 47 to 72.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Ans. This is done from line number 73 to 85.
    Q1. What type of Inheritance are you using?
    Ans1.Multiple inheritance i am using.
    Q2. Which mode of Inheritance are you using?
    Ans2. multiple inheritance mode i am using.
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Ans3. This is done from the line number 23.
    Q4. How is code reusability implemented?
    Ans4.first i had completed of simple calculator type and after that i had completed scientific calculator and then for the hybrid calculator i had used both of type of calculator which is simple calculator and scientific calculator to display the result so in this way code reusablity is implemented.
*/
#include <iostream>
#include <math.h>

using namespace std;
class simple_calculator
{
protected:
    int num1, num2;

public:
    void set_number(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void get_number()
    {
        cout << "The number 1 is :" << num1 << endl;
        cout << "The number 2 is :" << num2 << endl;
    }
    void calculator_simple_result()
    {
        cout << "The sum of num1 and num 2 is:" << num1 + num2 << endl;
        cout << "The subtraction of num1 and num2 is :" << num1 - num2 << endl;
        cout << "The multiplication of num1 and num2 is :" << num1 * num2 << endl;
        cout << "The division of num1 to num2 is :" << num1 / num2 << endl;
    }
};
class scientific_calculator
{
protected:
    int m, n;

public:
    void set_numbers(int q, int r)
    {
        m = q;
        n = r;
    }
    void get_numbers()
    {
        cout << "The number 1 is :" << m << endl;
        cout << "The number 2 is :" << n << endl;
    }
    void calculator_scientific_result()
    {
        float pi = 3.14;

        cout << "The square of number 1 is:" << pow(m, 2) << "  and number 2 :" << pow(n, 2) << endl;
        cout << "The square root of number 1 is :" << sqrt(m) << "  and number 2 is :" << sqrt(n) << endl;
        cout << "The sin value of number 1 is :" << sin(m * pi / 180) << "  and number 2 is:" << sin(n * pi / 180) << endl;
        cout << "The cos value of number 1 is :" << cos(m * pi / 180) << "  and number 2 is :" << cos(n * pi / 180) << endl;
    }
};
class hybridcalculator : public simple_calculator, public scientific_calculator
{
    protected:
    int hybridcalculator;
public:
    void display_result()
    {
        get_number();
        calculator_simple_result();
        get_numbers();
        calculator_scientific_result();
    }
};

int main()
{
    hybridcalculator hybrid;
    cout << "***************Result of simple calculator*****************" << endl;
    hybrid.set_number(50, 10);
    hybrid.get_number();
    hybrid.calculator_simple_result();
    cout << endl
         << endl
         << endl;
    cout << "*****************Result of scientific calculator******************" << endl;
    hybrid.set_numbers(60, 90);
    hybrid.get_numbers();
    hybrid.calculator_scientific_result();
    cout << endl
         << endl
         << endl;
    cout << "*******************Result of hybrid calculator********************" << endl;
    hybrid.display_result();

    return 0;
}