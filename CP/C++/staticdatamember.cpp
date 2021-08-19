#include<iostream>
using namespace std;

class Myclass
{
    static int x;
public:
    void get()
    {
        x=15;
    }
    void print()
    {
        x=x+10;
        cout << "x = " << x << endl;
    }
};
int Myclass :: x=0;

int main()
{
    Myclass a,b;
    a.get();
    b.get();
    a.print();
    b.print();
    return 0;
}
