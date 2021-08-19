#include<iostream>
#include<cmath>
using namespace std;

class Point
{
public:
    int x;
    int y;
};
class Rect
{
public:
    Point TL;
    Point BR;

    void computearea()
    {
        cout << abs(TL.x - BR.x) * abs(BR.y - TL.y) << endl;
    }
};

int main()
{
    Rect r={{0,2},{5,7}};
    cout << "(" << r.TL.x << " " << r.TL.y << ")" <<endl;
    cout << "(" << r.BR.x << " " << r.BR.y << ")" <<endl;

    r.computearea();
    return 0;
}
