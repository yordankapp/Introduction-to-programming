/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 9
 * @compiler GCC
 *
 */
#include<iostream>
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
int main()
{
    unsigned long long int a,b;
    cin>>a>>b;
    int brA=count(a);
    int brB=count(b);
    if(brA<brB || brA==brB)
    {
       cout<<"No\n";
    }
    else
    {
      int arr[brA] , arr2[brB];
      for(int i=brA; i>0; i--)
      {
        arr[i-1]=a%10;
	    a=a/10;
      }
     for(int i=brB; i>0; i--)
    {
        arr2[i-1]=b%10;
	    b=b/10;
    }
    int flag=0, i=0, j=0;
    while(i<brA)
    {
      if(arr[i]==arr2[j])
      {
      	i++;
      	j++;
	  }
	  else
	  {
	   flag++;
	   i++;
	  }
    }
    if(flag==1)
	  {cout<<"Yes\n";}
    else {cout<<"No\n";}
   }
    return 0;
}
