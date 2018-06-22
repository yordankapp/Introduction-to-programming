/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 3
 * @compiler GCC
 *
 */
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char a[1000000],b[1000000];
  int counter=0;
  cin>>a>>b;
  if(strlen(a) <= strlen(b))
  {
     for(int i=0;i<strlen(a); i++)
    {
        for(int j=0;j<strlen(b)-strlen(a)+1;j++)
        {
            if(a[i]==b[i+j])
               counter++;
        }
    }
    if(strlen(a)==1)
       cout<<counter<<"\n";
    else cout<<counter/strlen(a)<<"\n";
  }
else cout<<"0\n";
    return 0;
}
