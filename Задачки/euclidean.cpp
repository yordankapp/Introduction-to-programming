#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0 || b==0)
    {
        cout<<"Wrong input!"<<endl;
        return 0;
    }
    while(a!=b)
    {
        (a>b)?a-=b:b-=a;
    }
    cout<<a<<endl;
    return 0;
}
