// The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types.

#include <iostream>
using namespace std;

template <typename T>
T myMax(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
class Array
{
    T *ptr;
    int size;

public:
    Array(T arr[], int sz)
    {
        ptr = new T[sz];
        size = sz;
        for (int i = 0; i < size; i++)
        {
            ptr[i] = arr[i];
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << *(ptr + i) << " ";
        }
    }
};

// template <class T, class U = char>
template <class T, class U>
class A
{
    T x;
    U y;

public:
    A(T a, U b)
    {
        x = a;
        y = b;
    }

    void print()
    {
        cout << x << " " << y << endl;
    }
};

signed main()
{
    cout << myMax<int>(10, 20) << endl;
    cout << myMax<float>(10.5, 20.5) << endl;
    cout << myMax<double>(10.55, 20.50) << endl;
    cout << myMax<char>('a', 'b') << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    Array<int> a(arr, 5);
    a.print();
    cout << endl;

    A<int, char> a1(10, 'a');
    a1.print();
    A<int, double> b1(10, 20.5);
    b1.print();

    return 0;
}