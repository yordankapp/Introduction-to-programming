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
using namespace std;
int i=1;
int print(int n)
{
	if(n==1) cout<<n;
    else
    {
     print(n-1);
	 cout<<n;
	 print(n-1);
    }
	return 0;
}
int main()
{
	int n;
	cin>>n;
	if(n<0 || n>19)
	  return 0;
	print(n);
	return 0;
}
