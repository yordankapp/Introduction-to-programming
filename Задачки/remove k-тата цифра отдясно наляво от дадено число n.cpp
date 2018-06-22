#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,k,counter=0,res=0,power=0;
    bool foundK =false;
    cin>>n>>k;
    for(int i=n;i!=0;i/=10)
        counter++;
    if(k>counter)
    {
        cout<<"Wrong input!"<<endl;
        return 0;
    }
    for(int i=n;i!=0;i/=10)
    {
        if(k==power+1)
        {
            power++;
            foundK=true;
            continue;
        }
        res+=(i%10)*pow(10.0,power-foundK);
        power++;
    }
    cout<<res<<endl;
    return 0;
}
