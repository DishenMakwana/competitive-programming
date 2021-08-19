/* not work*/
#include<iostream>
using namespace std;

class Mathobj
{
    mutable bool pic;
    mutable double pi_;
public:
    Mathobj(): pic(false) {}
    double pi() const
    {
        if(!pic)
        {
            pi_=4;
            for(long st=3;st<10000000000;st+=4)
            {
                pi_ += ((-4.0 / (double)st) + (4.0 / ((double) st+2)));
            }
            pic=true;
        }
        return pi_;
    }
};

int main()
{
    const Mathobj mo;
    cout << mo.pi() << endl;
    return 0;
}
