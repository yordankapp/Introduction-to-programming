/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 10
 * @compiler GCC
 *
 */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long arr[100][100],n;
	int p1,p2,nq,flag, flag2;
    cin>>nq;
    if(nq<0 || nq>1000000)
      return 0;
    for(int i=0;i<nq;i++)
    {
      for(int j=0;j<3;j++)
      {
        cin>>arr[i][j];
      }
    }
    for(int i=0;i<nq;i++)
    {
      for(int j=0;j<3;j++)
      {
      	if(arr[i][1]==0)
         	{cout<<"infinity\n";break;}
		else
		{
	      int flag=0, flag2=0;
		  double z1,z2, z3;
      	  z1=arr[i][1]%arr[i][0];
      	  z2=arr[i][1]%arr[i][2];
      	  z3=z1&&z2;
      	  int v1=1, v2=1,p1=0,p2=0;
          double suma1, suma2;
          if(z3==0)
          {
        	for(int v1=1;p1<n;v1++)
        	{
        		p1=pow(arr[i][0],v1);
				suma1=arr[i][1]%p1;
				if(suma1==0)
				   flag++;
			}
			for(int v2=1;p2<n;v2++)
        	{
        		p2=pow(arr[i][2],v2);
				suma2=arr[i][1]%p2;
				if(suma2==0)
				   flag2++;
			}
			if(flag>=flag2)
	          cout<<flag<<"\n";
	        else cout<<flag2<<"\n";
	        break;
	   	  }
           else
		 {
		  if(z1==0 && z2!=0)
		  {
		  	for(int v1=1;p1<n;v1++)
        	{
        		p1=pow(arr[i][0],v1);
				suma1=arr[i][1]%p1;
				if(suma1==0)
				   flag++;
			}
			cout<<flag<<"\n";
			break;
		  }
		  else
		  {
		  	if(z1!=0 && z2==0)
		  	{
		  		for(int v2=1;p2<n;v2++)
        	  {
        		p2=pow(arr[i][2],v2);
				suma2=arr[i][1]%p2;
				if(suma2==0)
				   flag2++;
			  }
			  cout<<flag2<<"\n";
			  break;
			}
			else
			{ cout<<"0\n";
			  break;
			}
		  }
	    }
         }
       }
    }
    return 0;
}
