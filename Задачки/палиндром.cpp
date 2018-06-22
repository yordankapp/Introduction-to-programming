#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, rev=0, counter=0;
    cin>>n;
    for(int i=n;i!=0;i/=10)
        counter++;
    for(int i=n;i!=0;i/=10)
    {
        rev+=(i%10)*pow(10.0,counter-1);
        counter--;
    }
    cout<<(n==rev)<<endl;
    return 0;
}
