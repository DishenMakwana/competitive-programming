//Not Working
#include<iostream>
using namespace std;

class Printer
{
    bool bw_;
    bool bs_;
    Printer(bool bw=false,bool bs=false):bw_(bw),bs_(bs)
    {
        cout << "Printer Constructor" << endl;
    }
    static Printer *myprinter;

public:
    //static Printer *myprinter;
    ~Printer()
    {
        cout << "Printer Destructed" << endl;
    }
    static const Printer& printer(bool bw=false,bool bs=false)
    {
        if(!myPrinter)
        {
            myPrinter=new Printer(bw,bs);
        }
        return *myPrinter;
    }
    void print(int nP) const
    {
        cout << "Printer " << nP << "Pages " << endl;
    }
};
int Printer *printer::myPrinter=0;

int main()
{
    Printer::printer().print(10);
    Printer::printer().print(20);
    Printer::printer().~Printer();
    return 0;
}
