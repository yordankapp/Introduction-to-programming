/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 6
 * @compiler GCC
 *
 */
#include<iostream>
using namespace std;
const int MAX=1000;
int main()
{
	int number, min;
	double mas[MAX][3];
	cin>>number;
	for(int i=0;i<number;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>mas[i][j];
		}
	}	
 cout<<endl;    
 double swap, swap2, swap3, swap4, swap5,br=0; 
  while(br<number)
  {
    for(int i=0;i<number;i++) 
	{
		for(int j=0;j<number-1;j++)
		{
		  if(mas[j][0]>mas[j+1][0])
		  {
		  	swap=mas[j][0];
		  	mas[j][0]=mas[j+1][0];
		  	mas[j+1][0]=swap;
		  	
		  	swap2=mas[j][1];
		  	mas[j][1]=mas[j+1][1];
		  	mas[j+1][1]=swap2;
		  	
		  	swap3=mas[j][2];
		  	mas[j][2]=mas[j+1][2];
		  	mas[j+1][2]=swap3;
		  }
		}
	}
	br++;
}
   for(int i=0;i<number;i++) 
	{
		for(int j=i;j<number-1;j++)
		{
          if(mas[j][0]==mas[j+1][0])
		  {
		  	if(mas[j][1]>mas[j+1][1])
		  	 {
		  	  swap4=mas[j][1];
		  	  mas[j][1]=mas[j+1][1];
		  	  mas[j+1][1]=swap4;
		  	
		  	 swap5=mas[j][2];
		  	 mas[j][2]=mas[j+1][2];
		  	 mas[j+1][2]=swap5;
			 }
		  }
	   }
   }
	for(int i=0;i<number;i++)  
	{
		for(int j=0;j<3;j++)
		{
			if(j==2)
			  cout<<mas[i][j]<<endl;
			else cout<<mas[i][j]<<" ";
		}
	}
	cout<<"\n";
	return 0;
}
