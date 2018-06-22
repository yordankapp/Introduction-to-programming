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
const int MAX=1000;
int main()
{
	int number, min;
	int mas[MAX][4], mas2[3];
	cin>>number;
	for(int i=0;i<number;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>mas[i][j];
		}
	}
	for(int i=0;i<3;i++)
	  	cin>>mas2[i];   
 int swap, swap2, swap3, swap4, br=0; 
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
		  	
		  	swap4=mas[j][3];
		  	mas[j][3]=mas[j+1][3];
		  	mas[j+1][3]=swap4;
		  }
		}
	}
	br++;
}
  
   for(int i=0;i<number;i++) 
	{
		for(int j=0;j<number-1;j++)
		{
			for(int k=0; k<3;k++)
			{
				if(mas2[k]<=mas[i][1])
				{
				  if(mas2[k+1]<=mas[i][2])
				  {
				  	if(mas2[k+2]<=mas[i][3])
				  	  { cout<<mas[i][j]<<" "<<mas[i][j+1]<<" "<<mas[i][j+2]<<" "<<mas[i][j+3]<<endl;break;}
				  	else
				  	{
				  		if(i==number-1)
				  		  cout<<"No solution"; 
					 }
				  }
				  else
				  	{
				  		if(i==number-1)
				  		  cout<<"No solution"; 
					}
				  break;
				}
				else
				  	{
				  		if(i==number-1)
				  		  cout<<"No solution"; 
					 }
				break;
			}
			break;
		}
	}
	cout<<"\n";
	return 0;
}
