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
#include<iomanip>
using namespace std;
int main()
{
	int n;
	double D,arr[1000],v=0,S=0, res=0;
	cin>>n>>D;
	for (int i=0;i<n;i++)
	  cin>>arr[i];
	for (int i=0;i<n;i++)
	{
		if(v==0 && i==0)
		{
		  S=v*D+((arr[i]*D*D)/2);
		  if(S<0)
		    S=0;
		  res+=S;
	   }
	   else
	   {
	   	 v=v+arr[i-1]*D;
		 if(v<0)
		    v=0;
		S=v*D+((arr[i]*D*D)/2);
		if(S<0)
		  S=0;
		res+=S;
	   }
	}
	cout<<fixed<<setprecision(5)<<res<<"\n";
	return 0;
}
