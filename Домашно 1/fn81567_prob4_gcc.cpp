/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 4
 * @compiler GCC
 *
 */
#include<iostream>
using namespace std;
int main()
{
    int y1,y2;
    char x1,x2;
    char figure;
    cin>>figure;
    cin>>x2>>y2;
    cin>>x1>>y1;
    if (x1=='a') x1=1;
    if (x1=='b') x1=2;
    if (x1=='c') x1=3;
    if (x1=='d') x1=4;
    if (x1=='e') x1=5;
    if (x1=='f') x1=6;
    if (x1=='g') x1=7;
    if (x1=='h') x1=8;

    if (x2=='a') x2=1;
    if (x2=='b') x2=2;
    if (x2=='c') x2=3;
    if (x2=='d') x2=4;
    if (x2=='e') x2=5;
    if (x2=='f') x2=6;
    if (x2=='g') x2=7;
    if (x2=='h') x2=8;

    if (figure=='R')
    {
        if(x1==x2||y1==y2)
            cout<<"Yes\n";
        else cout<<"No\n";
    }
    if (figure=='B')
    {
        if((x1==x2+1 && y1==y2+1)||(x1==x2-1 && y1==y2-1))
            cout<<"Yes\n";
        else
        {
            if((x1==x2+2 && y1==y2+2)||(x1==x2-2 && y1==y2-2))
               cout<<"Yes\n";
            else
            {
              if((x1==x2+3 && y1==y2+3)||(x1==x2-3 && y1==y2-3))
                 cout<<"Yes\n";
              else
              {
                 if((x1==x2+4 && y1==y2+4)||(x1==x2-4 && y1==y2-4))
                   cout<<"Yes\n";
                 else
                 {
                   if((x1==x2+5 && y1==y2+5)||(x1==x2-5 && y1==y2-5))
                     cout<<"Yes\n";
                   else
                   {
                     if((x1==x2+6 && y1==y2+6)||(x1==x2-6 && y1==y2-6))
                       cout<<"Yes\n";
                    else
                    {
                        if((x1==x2+7 && y1==y2+7)||(x1==x2-7 && y1==y2-7))
                           cout<<"Yes\n";
                        else cout<<"No\n";
                    }
                   }
                 }
              }
            }
        }

    }
    if (figure=='Q')
    {
        if(x1==x2||y1==y2)
            cout<<"Yes\n";
        else
        {
           if((x1==x2+1 && y1==y2+1)||(x1==x2-1 && y1==y2-1))
              cout<<"Yes\n";
           else
           {
             if((x1==x2+2 && y1==y2+2)||(x1==x2-2 && y1==y2-2))
               cout<<"Yes\n";
             else
             {
               if((x1==x2+3 && y1==y2+3)||(x1==x2-3 && y1==y2-3))
                 cout<<"Yes\n";
               else
               {
                 if((x1==x2+4 && y1==y2+4)||(x1==x2-4 && y1==y2-4))
                   cout<<"Yes\n";
                 else
                 {
                   if((x1==x2+5 && y1==y2+5)||(x1==x2-5 && y1==y2-5))
                     cout<<"Yes\n";
                   else
                   {
                     if((x1==x2+6 && y1==y2+6)||(x1==x2-6 && y1==y2-6))
                       cout<<"Yes\n";
                     else
                     {
                        if((x1==x2+7 && y1==y2+7)||(x1==x2-7 && y1==y2-7))
                           cout<<"Yes\n";
                        else cout<<"No\n";
                     }
                   }
                 }
              }
            }
          }
        }
    }
    if (figure=='N')
    {
         if (x1==x2+2 && (y1==y2+1 || y1==y2-1)) cout<<"Yes\n";
         else
            {
              if (x1==x2+1 && (y1==y2+2 || y1==y2-2)) cout<<"Yes\n";
              else
                {
                  if (x1==x2-2 && (y1==y2+1 || y1==y2-1)) cout<<"Yes\n";
                  else
                  {
                    if (x1==x2-1 && (y1==y2+2 || y1==y2-2)) cout<<"Yes\n";
                    else cout<<"No\n";
                  }
                }
            }
    }
    return 0;
}
