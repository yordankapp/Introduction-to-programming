/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 9
 * @compiler GCC
 *
 */
#include<iostream>
using namespace std;
int main()
{
    unsigned int a,b,result;
    char operation;
    cin>>a>>operation>>b;
    if(operation=='+')
    {
      if(a>15 && 0<=b && b<=15)
      {
        a=a%16;
        result=a+b;
        if(result>15) cout<<result%16;
        else cout<<result;
      }
      else
      {
        if(b>15 && 0<=a && a<=15)
        {
         b=b%16;
         result=a+b;
         if(result>15) cout<<result%16;
         else cout<<result;
        }
        else
        {
           if(a>15 && b>15)
          {
            a=a%16;
            b=b%16;
            result=a+b;
            if(result>15) cout<<result%16;
            else cout<<result;
          }
          else
          {
            result=a+b;
            if(result>15) cout<<result%16;
            else cout<<result;
          }
        }
      }
    }
    else
    {
      if(operation=='-')
       {
         if(a>15 && 0<=b && b<=15)
        {
         a=a%16;
         result=a-b;
         if(result>15) cout<<result%16;
         else cout<<result;
        }
         else
        {
         if(b>15 && 0<=a && a<=15)
         {
          b=b%16;
          result=a-b;
          if(result>15) cout<<result%16;
          else cout<<result;
         }
         else
         {
          if(a>15 && b>15)
          {
            a=a%16;
            b=b%16;
            result=a-b;
            if(result>15) cout<<result%16;
            else cout<<result;
          }
          else
          {
            result=a-b;
            if(result>15) cout<<result%16;
            else cout<<result;
          }
         }
        }
       }
       else
       {
          if(operation=='*')
         {
           if(a>15 && 0<=b && b<=15)
          {
           a=a%16;
           result=a*b;
           if(result>15) cout<<result%16;
           else cout<<result;
          }
           else
          {
            if(b>15 && 0<=a && a<=15)
           {
            b=b%16;
            result=a*b;
            if(result>15) cout<<result%16;
            else cout<<result;
           }
            else
           {
             if(a>15 && b>15)
            {
             a=a%16;
             b=b%16;
             result=a*b;
             if(result>15) cout<<result%16;
             else cout<<result;
            }
            else
            {
             result=a*b;
             if(result>15) cout<<result%16;
             else cout<<result;
            }
           }
          }
         }
         else
         {
            if(operation=='/')
            {
              if(b!=0)
              {
                if(a>15 && 0<b && b<=15)
               {
                 a=a%16;
                 result=a/b;
                 if(result>15) cout<<result%16;
                 else cout<<result;
               }
                else
               {
                  if(b>15 && 0<=a && a<=15)
                  {
                   b=b%16;
                   result=a/b;
                   if(result>15) cout<<result%16;
                   else cout<<result;
                  }
                  else
                 {
                   if(a>15 && b>15)
                  {
                   a=a%16;
                   b=b%16;
                   result=a/b;
                   if(result>15) cout<<result%16;
                   else cout<<result;
                  }
                  else
                  {
                    result=a/b;
                    if(result>15) cout<<result%16;
                    else cout<<result;
                  }
                 }
                }
              }
              else cout<<"Division by zero!\n";
             }
             else
             {
               if(operation=='%')
              {
                if(b!=0)
               {
                  if(a>15 && 0<b && b<=15)
                 {
                   a=a%16;
                   result=a%b;
                   if(result>15) cout<<result%16;
                  else cout<<result;
                 }
                  else
                 {
                  if(b>15 && 0<=a && a<=15)
                  {
                   b=b%16;
                   result=a%b;
                   if(result>15) cout<<result%16;
                   else cout<<result;
                  }
                  else
                  {
                   if(a>15 && b>15)
                   {
                    a=a%16;
                    b=b%16;
                    result=a%b;
                    if(result>15) cout<<result%16;
                    else cout<<result;
                   }
                   else
                   {
                    result=a%b;
                    if(result>15) cout<<result%16;
                    else cout<<result;
                   }
                  }
                 }
               }
              else cout<<"Division by zero!\n";
             }
             }
           }
       }

    }
   return 0;
}
