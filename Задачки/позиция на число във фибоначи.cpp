#include<iostream>
using namespace std;
int main()
{
    int n, a=1,b=1, old;
    cin>>n;
    if(n==1||n==2)
        cout<<a;
    for(int i=3;i<=n;i++)
    {
        old=a;
        a=b;
        b+=old;
    }
    cout<<b;
    return 0;
}
