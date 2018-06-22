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
    int x1,y1,h1,a1,x2,y2,h2,a2,S;
    cin>>x1>>y1>>h1>>a1>>x2>>y2>>h2>>a2;
    if (x1>x2)
    {
        if ((x2+a2)>x1)
        {
            if (y1>y2)
            {
                if (y1<(y2+h2))
                {
                    S=((x2+a2)-x1)*((y2+h2)-y1);
                     cout<<S<<"\n";
               }
                else
                { S=0;
                 cout<<S<<"\n";
                }
            }
            else
             {
                if (y2<(y1+h1))
                {
                   S=((x2+a2)-x1)*((y1+h1)-y2);
                   cout<<S<<"\n";
                }
                else
                {
                 S=0;
                 cout<<S<<"\n";
                }
             }
        }
        else
        {
            S=0;
            cout<<S<<"\n";
        }
    }
    else
    { if (x2<(x1+a1))
      { if (y1>y2)
        {
          if (y1<(y2+h2))
          {
            S=((x1+a1)-x2)*((y2+h2)-y1);
            cout<<S<<"\n";
          }
          else
          {
             S=0;
             cout<<S<<"\n";
          }
        }
        else
        {
          if (y2<(y1+h1))
          {
            S=((x1+a1)-x2)*((y1+h1)-y2);
            cout<<S<<"\n";
          }
          else
          {
             S=0;
             cout<<S<<"\n";
          }
        }
      }
    else
     {
       S=0;
       cout<<S<<"\n";
     }
}
return 0;
}
