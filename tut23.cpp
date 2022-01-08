#include <iostream>

using namespace std;
class shop
{
private:
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void getprice(void);
};
void shop ::setprice(void)
{
    cout << "enter the id for the item no " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter the price of the item   " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::getprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout << "The item price for item no " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukan;
    
    dukan.initcounter();
    
    dukan.setprice();

    dukan.setprice();

    dukan.setprice();

    dukan.setprice();

    dukan.setprice();

    dukan.getprice();

    return 0;
}