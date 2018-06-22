/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 2
 * @compiler GCC
 *
 */
#include <iostream>
using namespace std;
int *s;
void print(int x, int step, int pos, int number)
{
	 if (x==0) 
     {
          pos--;
          cout<<number<<" = ";
          for(int i=0; i<pos; i++)
              cout<<s[i]<<" + ";
          cout<<s[pos]<<endl;
          return;
     }
     for (int i=step; i>0;i--)
     {
         if (x>=i) 
         {
             s[pos]=i;   
             print(x-i,i,pos+1,number);
         }
     }
}
int main()
{
    int n;
    cin>>n;
    if(n<1 || n>32)
       return 0;
    s=new int[n];
    print(n,n,0,n);
    delete[] s;
    return 0;
}
