#include<iostream>
#include<cstdlib>
using namespace std;

void * operator new(size_t n)
{
    cout << "Overload new"<<endl;
    void *ptr;
    ptr=malloc(n);
    return ptr;
}

void operator delete(void *p)
{
    cout <<endl<< "Delete overload"<<endl;
    free(p);
}

int main()
{
    int *a=new (int );
    *a=30;
    cout << "Value is="<<*a<<endl;
    delete a;
    return 0;
}
