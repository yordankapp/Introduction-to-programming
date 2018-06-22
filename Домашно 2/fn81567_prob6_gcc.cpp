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
int main()
{
    unsigned int n, coefficient=1;
    cin>>n;
    cout<<"1 ";
    for(int i=0;i<=n;i++)
     {
       for(int j=0;j<=i;j++)
       {
         if(i==0||j==0)
           coefficient=1;
         else
         {
           if(i==n)
           {coefficient=coefficient*(i-j+1)/j;
            cout<<coefficient<<" ";
           }
         }
       }
     }
     cout<<"\n";
    return 0;
}

