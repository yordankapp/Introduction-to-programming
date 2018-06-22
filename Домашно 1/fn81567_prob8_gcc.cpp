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
int main()
{
  int x,x1,x2,x3,x4,x5,x6,y;
  cin>>x;
  y=x;
  if(50<=y)
  {
    x1=y/50;
    y=y-x1*50;
  if (20<=y)
      {
        x2=y/20;
        y=y-x2*20;
        if(10<=y)
        {
          x3=y/10;
          y=y-x3*10;
          if(5<=y)
          {
            x4=y/5;
            y=y-x4*5;
            if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x3<<"*10 + "<<x4<<"*5 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x3<<"*10 + "<<x4<<"*5 + "<<x5<<"*2\n";
                     return 0;
            }
            else x5=0;
            if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x3<<"*10 + "<<x4<<"*5 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x3<<"*10 + "<<x4<<"*5\n";
                     return 0;
          }
          else x4=0;
          if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                     cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x3<<"*10 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x3<<"*10 + "<<x5<<"*2\n";
                     return 0;
            }
              else x5=0;
              if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                     cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x3<<"*10  + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x3<<"*10\n";
    return 0;
        }
        else x3=0;
        if(5<=y)
          {
            x4=y/5;
            y=y-x4*5;
            if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x4<<"*5 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20  + "<<x4<<"*5 + "<<x5<<"*2\n";
                     return 0;
            }
            else x5=0;
           if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20  + "<<x4<<"*5 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x4<<"*5\n";
                     return 0;
          }
          else x4=0;
          if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                     cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x5<<"*2\n";
                     return 0;
            }
              else x5=0;
              if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                     cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x2<<"*20\n";
    return 0;
     }
      else x2=0;
      if(10<=y)
        {
          x3=y/10;
          y=y-x3*10;
          if(5<=y)
          {
            x4=y/5;
            y=y-x4*5;
            if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" = "<<x1<<"*50 + "<<x3<<"*10 + "<<x4<<"*5 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x3<<"*10 + "<<x4<<"*5 + "<<x5<<"*2\n";
                     return 0;
            }
            else x5=0;
            if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" = "<<x1<<"*50 + "<<x3<<"*10 + "<<x4<<"*5 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x3<<"*10 + "<<x4<<"*5\n";
                     return 0;
          }
          else x4=0;
         if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" = "<<x1<<"*50 + "<<x3<<"*10 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x3<<"*10 + "<<x5<<"*2\n";
                     return 0;
            }
            else x5=0;
            if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" = "<<x1<<"*50 + "<<x3<<"*10 +  "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x3<<"*10\n";
                     return 0;
        }
        else x3=0;
        if(5<=y)
          {
            x4=y/5;
            y=y-x4*5;
            if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" = "<<x1<<"*50 + "<<x4<<"*5 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50  + "<<x4<<"*5 + "<<x5<<"*2\n";
                     return 0;
            }
            else x5=0;
            if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" = "<<x1<<"*50 + "<<x4<<"*5 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + + "<<x4<<"*5\n";
                     return 0;
          }
          else x4=0;
          if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                     cout<<x<<" = "<<x1<<"*50 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50 + "<<x5<<"*2\n";
                     return 0;
            }
              else x5=0;
              if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                     cout<<x<<" = "<<x1<<"*50 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x1<<"*50\n";
    return 0;
  }
    else x1=0;
    if (20<=y)
      {
        x2=y/20;
        y=y-x2*20;
        if(10<=y)
        {
          x3=y/10;
          y=y-x3*10;
          if(5<=y)
          {
            x4=y/5;
            y=y-x4*5;
            if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;cout<<x<<" = "<<x2<<"*20 + "<<x3<<"*10 + "<<x4<<"*5 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x2<<"*20 + "<<x3<<"*10 + "<<x4<<"*5 + "<<x5<<"*2\n";
                     return 0;
            }
            else x5=0;
                if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" = "<<x2<<"*20 + "<<x3<<"*10 + "<<x4<<"*5 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x2<<"*20 + "<<x3<<"*10 + "<<x4<<"*5\n";
                     return 0;
          }
          else x4=0;
          if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;cout<<x<<" ="<<x2<<"*20 + "<<x3<<"*10 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" =  "<<x2<<"*20 + "<<x3<<"*10 + "<<x5<<"*2\n";
                     return 0;
            }
            else x5=0;
          if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                     cout<<x<<" = "<<x2<<"*20 + "<<x3<<"*10 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x2<<"*20 + "<<x3<<"*10 + "<<x5<<"*2\n";
                     return 0;
            }
              else x5=0;
              if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                     cout<<x<<" ="<<x2<<"*20 + "<<x3<<"*10 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x2<<"*20 + "<<x3<<"*10\n";
    return 0;
        }
        else x3=0;
        if(5<=y)
          {
            x4=y/5;
            y=y-x4*5;
            if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" ="<<x2<<"*20 + "<<x4<<"*5 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x2<<"*20 +"<<x4<<"*5 + "<<x5<<"*2\n";
                     return 0;
            }
            else x5=0;
            if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;cout<<x<<" = "<<x2<<"*20 + "<<x4<<"*5 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" ="<<x2<<"*20 + "<<x4<<"*5\n";
                     return 0;
          }
          else x4=0;
          if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                     cout<<x<<" ="<<x2<<"*20 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" ="<<x2<<"*20 + "<<x5<<"*2\n";
                     return 0;
            }
              else x5=0;
              if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                     cout<<x<<" ="<<x2<<"*20 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x2<<"*20\n";
    return 0;
     }
      else x2=0;
      if(10<=y)
        {
          x3=y/10;
          y=y-x3*10;
          if(5<=y)
          {
            x4=y/5;
            y=y-x4*5;
            if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" ="<<x3<<"*10 + "<<x4<<"*5 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" ="<<x3<<"*10 + "<<x4<<"*5 + "<<x5<<"*2\n";
                     return 0;
            }
            else x5=0;
            if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" =  "<<x3<<"*10 + "<<x4<<"*5 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x3<<"*10 + "<<x4<<"*5\n";
                     return 0;
          }
          else x4=0;
          if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" ="<<x3<<"*10 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" ="<<x3<<"*10 + "<<x5<<"*2\n";
                     return 0;
            }
            else x5=0;
            if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" ="<<x3<<"*10 +"<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x3<<"*10\n";
                     return 0;
        }
        else x3=0;
        if(5<=y)
          {
            x4=y/5;
            y=y-x4*5;
            if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" = "<<x4<<"*5 + "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" =  "<<x4<<"*5 + "<<x5<<"*2\n";
                     return 0;
            }
            else x5=0;
            if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                    cout<<x<<" = "<<x4<<"*5 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" =  "<<x4<<"*5\n";
                     return 0;
          }
          else x4=0;
          if(2<=y )
            {
               x5=y/2;
               y=y-x5*2;
               if(1<=y)
                {
                    x6=y/1;
                     cout<<x<<" = "<<x5<<"*2 + "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" = "<<x5<<"*2\n";
                     return 0;
            }
              else x5=0;
              if(1<=y)
                {
                    x6=y/1;
                    y=y-x6*1;
                     cout<<x<<" = "<<x6<<"*1\n";
                     return 0;
                }
                else x6=0;
                cout<<x<<" ="<<x3<<"*10\n";
    return 0;
  }
