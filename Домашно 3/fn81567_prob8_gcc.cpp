/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 8
 * @compiler GCC
 *
 */
#include<iostream>
using namespace std;
int *mas;
int main()
{
	int n;
	cin>>n;
	mas= new int[n];
	if(n<0 || n> 100000)
	   return 0;
	for(int i=0; i<n;i++)
	  cin>>mas[i];
	for(int i=0; i<n;i++) 
	{
	   if(mas[i]%3==0) 
	     cout<<mas[i]<<" ";
	}
	for(int i=0; i<n;i++) 
	{
	   if(mas[i]%3==1) 
	     cout<<mas[i]<<" ";
	}
	for(int i=0; i<n;i++) 
	{
	   if(mas[i]%3!=0 && mas[i]%3!=1) 
	     cout<<mas[i]<<" ";
	}
	cout<<"\n"<<endl;
	delete [] mas;
	return 0;
}
