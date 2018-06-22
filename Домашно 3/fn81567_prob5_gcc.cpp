/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 5
 * @compiler GCC
 *
 */
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
int res(char const*& str, int lenght)
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
