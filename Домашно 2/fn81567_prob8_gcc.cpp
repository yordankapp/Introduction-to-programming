#include<iostream>
#include<cmath>
using namespace std;
int count(int chislo)
{
    int br=0;
    while(chislo!=0)
    {
        br++;
	chislo=chislo/10;
    }
    return br;
}
int convertKToDecimal(int n, int k)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(k,i);
        ++i;
    }
    return decimalNumber;
}
long long convertDecimalToK(int n,int k)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
    while (n!=0)
    {
        remainder = n%k;
        n /= k;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
int main()
{
    long long n,m,k,x,y,res=0;
    cin>>n>>m>>k;
    x=n;
    y=m;
    if(k<2 || k>10)
        return 0;
    if(n<0 || n>500000 || m<0 || m>500000)
        return 0;
    int brn=count(n);
    int brm=count(m);
    int arr[brn] , arr2[brm];
    for(int i=brn; i>0; i--)
      {
        arr[i-1]=x%10;
	x=x/10;
      }
    for(int i=brm; i>0; i--)
    {
        arr2[i-1]=y%10;
	y=y/10;
    }
    for (int i=0; i<brn;i++)
    {
        if(arr[i]>=k)
            {cout<<"Bad input data!\n";
            return 0;
            }
        else
        {
            for (int i=0; i<brm;i++)
          {
            if(arr2[i]>=k)
            {cout<<"Bad input data!\n";
             return 0;
            }
           }
        }
     }
     res= convertKToDecimal(n,k) + convertKToDecimal(m,k);
     cout<<convertDecimalToK(res,k)<<"\n";
    return 0;
}
