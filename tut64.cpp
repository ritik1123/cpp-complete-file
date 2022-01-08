#include <iostream>

using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            /* code */
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector <float>v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 2.4;
    v1.arr[2] = 3.4;
    vector  <float>v2(3);
    v2.arr[0] = 4.6;
    v2.arr[1] = 5.6;
    v2.arr[2] = 6.6;
    float a = v1.dotproduct(v2);
    cout<<a<<endl;
     
    return 0;
}