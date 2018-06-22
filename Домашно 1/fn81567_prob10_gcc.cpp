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
using namespace std;
int main()
{
    long double a,b,c,d,e,f,x,y;
    cin>>a>>b>>c>>d>>e>>f;
    x=(c*e-b*f)/(a*e-b*d);
    y=(a*f-c*d)/(a*e-b*d);
    if(a*e-b*d==0) cout<<"No solution\n";
    else
    {
        if((a==0 && b==0 && c==0) ||(d==0 && e==0 && f==0))
        {
          cout<<"Many solutions\n";
        }
        else
        {
          if((a==b && b==c && a==c) ||(d==e && e==f && d==f))
          {
           cout<<"Many solutions\n";
          }
          else cout<<x<<" "<<y<<"\n";
        }
    }
    return 0;
}
