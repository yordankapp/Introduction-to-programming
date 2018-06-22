#include<iostream>
using namespace std;
int main()
{
    int a,b,helpA,helpB;
    cin>>a>>b;
    helpA=a;
    helpB=b;
    if(a==0||b==0)
        cout<<"wrong input"<<endl;
    while(a!=b)
    {
        (a>b) ? a-=b:b-=a;
    }
    cout<<((helpA*helpB)/a);
    return 0;
}
