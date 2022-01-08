#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
    //function objects : function wrapped in a class so that it is avaliable  like an object.
    int arr[]={1,2,5,4,6,12};
    sort(arr,arr+5,greater<int>());
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<arr[i]<<endl;
    }
    

    return 0;
}