#include<iostream>
#include<cmath>
#include <cstring>
using namespace std;
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
int res(char const *& str, int lenght)
 {
   int res=0;
   for(int i=0;i<lenght;i++)
   {
    if (*str >= '0' && *str <= '9')
     {
	  res=res+(*str-'0');
	  str++;
     }
     else str++;
   }
    return res;
}
int main()
{
    char str[1001];
    cin.getline(str,1001);
    char const *p=str;
    cout<<res(p,strlen(str));
	cout<<"\n";
    return 0;
}










/*
#include<iostream>

#include<cstring>
using namespace std;
int const MAX = 100;
long expr(char const*& s, int lenght) 
{
  int res=0;
  for(int i=0;i<lenght;i++)
  {
   if (*s >= '0' && *s <= '9')
     {
	  res=res+(*s-'0');
	  s++;
     }
   else s++;
  }
  return res;
}
	int main()
	{
	char s[1001] = "";
	cout << "izraz: ";
	cin.getline(s, 1001);
	char const *p = s;
	cout << "rezultat: " << expr(p,strlen(s)) << endl;
	return 0;
	}
	*/
	
