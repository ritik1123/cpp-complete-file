#include<iostream>
#include<map>
#include<string>

using namespace std;


int main()
{
    map<string,int>marksMap;
    marksMap["Ritik"] = 99;
    marksMap["Venu"] = 98;
    marksMap["Kislay"]= 97;
    marksMap.insert({{"Shruti",96},{"Anand",95}});
    map<string,int>::iterator iter;
    for (iter=marksMap.begin();iter!=marksMap.end() ; iter++)
    {
        /* code */
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"The size of student is : "<<marksMap.size()<<endl;
    cout<<"The max size of student is : "<<marksMap.max_size()<<endl;
    cout<<"The empty's size of student is : "<<marksMap.empty();

    
    
    return 0;
}