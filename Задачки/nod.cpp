#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0||b==0)
        cout<<"wrong input"<<endl;
    while(a!=b)
    {
        (a>b) ? a-=b:b-=a;
    }
    cout<<a;
    return 0;
}
