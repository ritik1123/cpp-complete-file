#include<iostream>
#include<vector> 

using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";

    }
    cout<<endl;
    
}

int main()
{

    vector<int> vec1;
    int element,size;
    cout<<"Enter the size of an element : ";
    cin>>size;
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<"Enter an element to add in vector : ";
        cin>>element;
        vec1.push_back(element);

    }
    // vec1.pop_back();
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,456);
    display(vec1);
    
    
    return 0;
}