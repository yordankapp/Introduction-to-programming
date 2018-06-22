/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 1
 * @compiler GCC
 *
 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const double pi=3.14;
int main()
{
    double arr[1000], arr1[1000],arr2[1000];
    int n, j=0,k=0;
    cin>>n;
    for(int i=0;i<2*n;i++)
      cin>>arr[i];
    for(int i=0;i<2*n;i++)
     {
         if(i%2==0)
          {
			  while(j<n)
              {
              	arr1[j]=arr[i];
				break;
			  }
			  j++;
          }
         else
         {
            while(k<n)
            { arr2[k]=arr[i];
			  break;
			}
			k++;
         }
     }
    for(int i=0;i<n;i++)
      {
      	if(fabs(arr1[i])>5)
      	  {
      	  	if(arr1[i]<0)
      	  	   arr1[i]=-5;
      	  	else arr1[i]=5;
			}
	   }
    for(int i=0;i<n;i++)
      {
      	if(fabs(arr2[i])>2)
      	  {
      	  	if(arr2[i]<0)
      	  	   arr2[i]=-2;
      	  	else arr2[i]=2;
		 }
	  }
    double sum=0, koren=0,z=0;
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n;j++)
		{
			koren=sqrt(pow((arr1[i]-arr1[i+1]),2)+pow((arr2[j]-arr2[j+1]),2));
			z=pi*koren;
			sum=sum+ (z/2 + koren)/2;
			i++;
		}
		break;
	}
	cout<<fixed<<setprecision(5)<<sum<<"\n";
	return 0;
}
