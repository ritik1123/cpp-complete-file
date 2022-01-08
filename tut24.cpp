#include <iostream>

using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Employee id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Employee id is " << id << " and employee number is " << count << endl;
    }
    static void getcount(void)
    {
        cout << "The count number is :" << count << endl;
    }
};
int Employee ::count;

int main()
{
    Employee ritik, ritu, kajal;
    ritik.setData();
    ritik.getData();
    Employee ::getcount();

    ritu.setData();
    ritu.getData();
    Employee ::getcount();

    kajal.setData();
    kajal.getData();
    Employee ::getcount();

    return 0;
}