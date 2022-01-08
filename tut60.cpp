#include<iostream>
#include<fstream> 

using namespace std;

int main()
{
    string st = "Ritik kumar";
    string st2;
    // ofstream out("sampletutorial.txt");
    // out<<st;

    ifstream in("sampletutorialb.txt");
    getline(in,st2);
    cout<<st2;
    
    return 0;
}