#include<iostream>
using namespace std;

int main()
{
    int *a=new int(5);
    cout << *a <<endl;;
    int *p=(int *)operator new(sizeof(int));
    *p=10;
    cout << *p<<endl;
    int *b=(int *)operator new(sizeof(int));
    *b=20;
    cout << *b<<endl;

    int *x=new int[3];
    x[0]=1,x[1]=2,x[2]=3;
    for(int i=0;i<3;i++)
        cout << x[i] <<endl;
    return 0;
}
