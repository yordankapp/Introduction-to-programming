/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 4
 * @compiler GCC
 *
 */
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
int main()
{
    int a,b, x ,y;
    cin>>x>>y;
    a=fabs(x);
    b=fabs(y);
    int brA=count(a);
    int brB=count(b);
    int arr[brA]; int arr2[brB];
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

    int min,tmp;

	for (int i=0; i<brA-1; i++)
	{
	    min = i;

		for (int j=i+1; j<brA; j++)
		{

		  if (arr[j] < arr[min])
                   min=j;
		}

	        if (min != i)
            {
                 tmp = arr[i];
                 arr[i] = arr[min];
                 arr[min] = tmp;
            }
	}
	for (int i=0; i<brB-1; i++)
	{
	    min = i;

		for (int j=i+1; j <brB; j++)
		{

		if (arr2[j] < arr2[min])
                   min=j;
			}

	            if (min != i)
            {
                 tmp = arr2[i];
                 arr2[i] = arr2[min];
                 arr2[min] = tmp;
            }
	}

    int trueFlag=0;
    for(int i=0; i<=brB; i++)
    {
        if(i==brB-1)
         {
           for(int j=0; j<brA; j++)
          {
            if(arr[i]==arr2[j]) {trueFlag++;break;}
          }
         }
        else
        {
         if(arr[i]==arr[i+1])
		 {
		  i++;
		  trueFlag+=1;
		 }
         for(int j=0; j<brA; j++)
         {
            if(arr[i]==arr2[j]) {trueFlag++;break;}
         }
        }
    }

    int trueFlag2=0;

    for(int i=0; i<=brA; i++)
    {
        if(i==brA-1)
         {
           for(int j=0; j<brA; j++)
          {
            if(arr2[i]==arr[j]) {trueFlag2++; break;}
          }
         }
        else
       {
        if(arr2[i]==arr2[i+1])
		{
		   i++;
		   trueFlag2+=1;
		}
        for(int j=0; j<brB; j++)
        {
            if(arr2[i]==arr[j]) {trueFlag2++;break;}
        }
       }
    }
    if((trueFlag==brA)&&(trueFlag2==brB)) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
