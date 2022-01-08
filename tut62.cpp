#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ofstream out;
    out.open("sampletutorial.txt");
    out<<"This is me";
    out<<"THIS IS ALSO ME";
    out.close();

    ifstream in;
    string st;
    in.open("sampletutorial.txt");
    // in>>st;
    // cout<<st<<endl;
    while (in.eof() == 0)
    {
        /* code */
        getline(in,st);
        cout<<st<<endl;
    }
    
    in.close();

    return 0;
}