#include<iostream>
#include<cstdlib>
using namespace std;

void *operator new[](size_t a)
{
    void *t=operator new(a);
    return t;
}
void operator delete[](void *a)
{
    operator delete(a);
}

int main()
{
    char *t=new char[10];
    cout << "p= "<< t<<endl;
    for(int i=0;i<10;i++)
        cout << t[i];
    delete []t;
    return 0;
}
