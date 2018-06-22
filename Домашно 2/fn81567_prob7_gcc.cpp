/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 7
 * @compiler GCC
 *
 */
#include <iostream>
#include <cmath>
using namespace std;
const int MAX=100000;
int main()
{
  int n,m,y,x=1,br=0;
  int mas[MAX];
  cin>>n>>m>>y;
  if(0>n || n>1000001 || 1>m || m>100001 || 0>y || y>m)
   {return 0;}
  int i=0, sum;
  while(1<=x && x<=m-1 && i<m-1)
  {
    sum=pow(x,n);
    if(sum % m ==y)
     { br++;
       mas[i]=x;
       i++;
     }
     x++;
  }
  if(br>0)
    {
       for(int j=0; j<br;j++)
         {
             if(j==br-1)
               cout<<mas[j]<<"\n";
             else
                cout<<mas[j]<<" ";
         }
    }
  else cout<<"-1\n";
  return 0;
}
