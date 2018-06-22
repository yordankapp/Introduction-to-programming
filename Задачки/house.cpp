#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    double x,y;
    cin>>a>>x>>y;
    bool square = (fabs(x) <= a) && (fabs(y) <= a);
    bool triang = (fabs(x) <= fabs(y-2*a)) && (y<=2*a) && (y>=a);
    bool res = square || triang;
    cout<<res<<endl;
    return 0;
}
