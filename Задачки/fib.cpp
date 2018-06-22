#include <iostream>
using namespace std;

int main()
{
    int n,a=1,b=1,old;
    cin>>n;
    for(int i=3;i<=n;i++)
    {
        old=a;
        a=b;
        b+=old;
    }
    cout<<b<<endl;
    return 0;
}
