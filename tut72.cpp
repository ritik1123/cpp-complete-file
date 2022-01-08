#include<iostream>
#include<list>

using namespace std;
void display(list<int> &lst){
list<int> :: iterator it;
    for (it = lst.begin(); it!=lst.end(); it++)
    {
        /* code */
        cout<<*it<<" ";
    }
    cout<<endl;
    
}


int main()
{
    list<int> list1;
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(1);
    display(list1);
    // list1.remove(6);
    // display(list1);
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    list1.sort();
    display(list1);
    list1.reverse();
    display(list1);
    list<int> list2(3);
    list<int>::iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 22;
    it++;
    *it = 11;
    it++;
    display(list2);
    list1.merge(list2);
    cout<<"List 1 after merging";
    display(list1);




    
    return 0;
}