#include<iostream>
#include<string.h>

using namespace std;
class dukanitem
{
    int id;
    float price;
    char str[20];
    public:
    void setdata(int a ,float p ){
        char * str ;
        id = a;
        price = p;
        str ;
    }
    void getdata(){
        cout<<"Your name is : "<<str[20]<<endl;
        cout<<"ID of your item is : "<<id<<endl;
        cout<<"PRICE of your item is : "<<price<<endl;
        
    }

};


int main()
{
    int size = 5;
    
    dukanitem *ptr = new dukanitem[size];
    dukanitem *ptrTemp = ptr;
    int r,i;
    float s;
    char t[20];
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<"Enter the NAME , ID and PRICE of the item : "<<i+1<<endl;
        cin>>t>>r>>s;
        ptr->setdata(r,s);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        /* code */
        cout<<"Item number"<<i+1<<endl;
        ptrTemp->getdata();
        ptrTemp++;
    }
    
    
    
    return 0;
}