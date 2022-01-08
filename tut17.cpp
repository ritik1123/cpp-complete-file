#include<iostream>

using namespace std;
inline int product(int a,int b){
    static int c = 0;//This execute only once
    c=c+1;// Next time this fuction is run,the value of c will retained
    return a*b+c;
}
float moneyRecived(int currentmoney,int factor=1.04){
    return currentmoney*factor;


}

int main()
{
    int a,b;
    cout<<"Enter the value of a anf b"<<endl;
    cin>>a>>b;
    cout<<"The product of two number is "<<product(a,b)<<endl;
    int money ;
    cout<<"Enter the money : "<<endl;
    cin>>money;
    cout<<"If you have "<<money<<"RS in your bank account you will recive"<<moneyRecived(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIP: If you have"<<money<<"Rs in your bank account you will recive"<<moneyRecived(money,1.1)<<"Rs after 1 year"<<endl;
    return 0;
}