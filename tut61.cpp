#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //connecting our file with rout stream.
    ofstream rout("sampletutorial.txt");
    //creating a name string and filling it with our name;
    cout<<"enter your name";
    string name;
    cin>>name;
    //writing a string  to this file.
    rout<<"My name is "+ name;
    rout.close();
    //reading the file
    ifstream rin("sampletutorial.txt");
    string content;
    getline(rin,content);
    cout<<"The content of the file is : "<<content<<endl;
    return 0;
}