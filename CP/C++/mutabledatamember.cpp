#include<iostream>
using namespace std;

class Myclass
{
    int mem;
    mutable int mmem;
public:
    Myclass(int m,int mm): mem(m),mmem(mm) {}
    int getmem() const {return mem;}
    void setmem(int i) {mem=i;}
    int getmmem() const {return mmem;}
    void setmmem(int i) const {mmem=i;}
};

int main()
{
    const Myclass myctobj(1,2);
    cout << myctobj.getmem()<<endl;
    //myctobj.setmem(3);
    cout << myctobj.getmmem()<<endl;
    myctobj.setmmem(4);
    return 0;
}
