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
#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,p;
    cin>>n;
    n1= n/1000000000;
    n2=(n/100000000)%10;
    n3=(n/10000000)%10;
    n4=(n/1000000)%10;
    n5=(n/100000)%10;
    n6=(n/10000)%10;
    n7=(n/1000)%10;
    n8=(n/100)%10;
    n9=(n/10)%10;
    n10=n%10;
    p=n1*2+n2*4+n3*8+n4*5+n5*10+n6*9+n7*7+n8*3+n9*6;
    bool isleap;
    int maxdays;
 if(p%11<10)
    {
      if(n10==p%11)
      {
        {
          isleap= ((n1*10+n2)%4==0 && (n1*10+n2)%100!=0)|| ((n1*10+n2)%400==0);
          if(n3*10+n4>0 && n3*10+n4<13)
          {
            if(n3*10+n4==1 || n3*10+n4==3 || n3*10+n4==5 || n3*10+n4==7 || n3*10+n4==8 || n3*10+n4==10 ||n3*10+n4==12)
               {maxdays=31;
                if(maxdays>=n5*10+n6 && n5*10+n6>0)
                  {cout<<n5<<n6<<"."<<n3<<n4<<".19"<<n1<<n2<<" ";
                   if((n/10)%2==0) cout<<"M\n";
                   else cout<<"F\n";
                   }
                else cout<<"Bad input data!\n";
               }
            else
            {
              if(n3*10+n4==4 || n3*10+n4==6 || n3*10+n4==9 || n3*10+n4==11)
                 {maxdays=30;
                   if(maxdays>=n5*10+n6 && n5*10+n6>0)
                   { cout<<n5<<n6<<"."<<n3<<n4<<".19"<<n1<<n2<<" ";
                     if((n/10)%2==0) cout<<"M\n";
                     else cout<<"F\n";
                   }
                   else cout<<"Bad input data!\n";
                 }
               else
               { maxdays=28+isleap;
                if (maxdays>=n5*10+n6 && n5*10+n6>0)
                    { cout<<n5<<n6<<"."<<n3<<n4<<".19"<<n1<<n2<<" ";
                     if((n/10)%2==0) cout<<"M\n";
                     else cout<<"F\n";
                   }
                else cout<<"Bad input data!\n";
               }
            }
          }
          else
          {
            if ((20<n3*10+n4)&&(n3*10+n4<33))
            {
              if(n3*10+n4==1+20 || n3*10+n4==3+20 || n3*10+n4==5+20 || n3*10+n4==7+20 || n3*10+n4==8+20 || n3*10+n4==10+20 ||n3*10+n4==12+20)
              {
                  {  maxdays=31;
                     if(maxdays>=n5*10+n6 && n5*10+n6>0)
                      {cout<<n5<<n6<<"."<<(n3*10+n4)-20<<".18"<<n1<<n2<<" ";
                       if((n/10)%2==0) cout<<"M\n";
                       else cout<<"F\n";
                      }
                     else cout<<"Bad input data!\n";
                  }
              }
              else
               {
                 if(n3*10+n4==4+20 || n3*10+n4==6+20 || n3*10+n4==9+20 || n3*10+n4==11+20)
                 { maxdays=30;
                   if(maxdays>=n5*10+n6 && n5*10+n6>0)
                   { cout<<n5<<n6<<"."<<(n3*10+n4)-20<<".18"<<n1<<n2<<" ";
                     if((n/10)%2==0) cout<<"M\n";
                     else cout<<"F\n";
                   }
                   else cout<<"Bad input data!\n";
                 }
                 else
                 { maxdays=28+isleap;
                   if(maxdays>=n5*10+n6 && n5*10+n6>0)
                    { cout<<n5<<n6<<"."<<(n3*10+n4)-20<<".18"<<n1<<n2<<" ";
                     if((n/10)%2==0) cout<<"M\n";
                     else cout<<"F\n";
                    }
                  else cout<<"Bad input data!\n";
                 }
               }
            }
            else
            {
              if ((40<n3*10+n4)&&(n3*10+n4<53))
              {
                if(n3*10+n4==1+40 || n3*10+n4==3+40 || n3*10+n4==5+40 || n3*10+n4==7+40 || n3*10+n4==8+40 || n3*10+n4==10+40 ||n3*10+n4==12+40)
              {
                  {  maxdays=31;
                     if(maxdays>=n5*10+n6 && n5*10+n6>0)
                      {cout<<n5<<n6<<"."<<(n3*10+n4)-40<<".20"<<n1<<n2<<" ";
                       if((n/10)%2==0) cout<<"M\n";
                       else cout<<"F\n";
                      }
                     else cout<<"Bad input data!\n";
                  }
              }
              else
               {
                 if(n3*10+n4==4+40 || n3*10+n4==6+40 || n3*10+n4==9+40 || n3*10+n4==11+40)
                 { maxdays=30;
                   if(maxdays>=n5*10+n6 && n5*10+n6>0)
                   { cout<<n5<<n6<<"."<<(n3*10+n4)-40<<".20"<<n1<<n2<<" ";
                     if((n/10)%2==0) cout<<"M\n";
                     else cout<<"F\n";
                   }
                   else cout<<"Bad input data!\n";
                 }
                 else
                 { maxdays=28+isleap;
                   if(maxdays>=n5*10+n6 && n5*10+n6>0)
                    { cout<<n5<<n6<<"."<<(n3*10+n4)-40<<".20"<<n1<<n2<<" ";
                     if((n/10)%2==0) cout<<"M\n";
                     else cout<<"F\n";
                    }
                  else cout<<"Bad input data!\n";
                 }
               }
              }
                else cout<<"Bad input data!\n";
             }
           }
         }
      }
      else cout<<"Bad input data!\n";
    }
    else
    {
        if (p%11>=10)
        {
            if(n10==0)
            {
              {
                isleap= ((n1*10+n2)%4==0 && (n1*10+n2)%100!=0)|| ((n1*10+n2)%400==0);
                if(n3*10+n4>0 && n3*10+n4<13)
                   {
                     if(n3*10+n4==1 || n3*10+n4==3 || n3*10+n4==5 || n3*10+n4==7 || n3*10+n4==8 || n3*10+n4==10 ||n3*10+n4==12)
                     {maxdays=31;
                      if(maxdays>=n5*10+n6 && n5*10+n6>0)
                       {cout<<n5<<n6<<"."<<n3<<n4<<".19"<<n1<<n2<<" ";
                      if((n/10)%2==0) cout<<"M\n";
                      else cout<<"F\n";
                       }
                     else cout<<"Bad input data!\n";
                     }
                    else
                      {
                        if(n3*10+n4==4 || n3*10+n4==6 || n3*10+n4==9 || n3*10+n4==11)
                          {maxdays=30;
                           if(maxdays>=n5*10+n6 && n5*10+n6>0)
                            { cout<<n5<<n6<<"."<<n3<<n4<<".19"<<n1<<n2<<" ";
                              if((n/10)%2==0) cout<<"M\n";
                              else cout<<"F\n";
                            }
                           else cout<<"Bad input data!\n";
                          }
                        else
                        { maxdays=28+isleap;
                          if (maxdays>=n5*10+n6 && n5*10+n6>0)
                           { cout<<n5<<n6<<"."<<n3<<n4<<".19"<<n1<<n2<<" ";
                            if((n/10)%2==0) cout<<"M\n";
                            else cout<<"F\n";
                           }
                          else cout<<"Bad input data!\n";
                        }
                     }
                   }
                 else
                {
                   if ((20<n3*10+n4)&&(n3*10+n4<33))
                  {
                    if(n3*10+n4==1+20 || n3*10+n4==3+20 || n3*10+n4==5+20 || n3*10+n4==7+20 || n3*10+n4==8+20 || n3*10+n4==10+20 ||n3*10+n4==12+20)
                    {
                      {  maxdays=31;
                       if(maxdays>=n5*10+n6 && n5*10+n6>0)
                        {cout<<n5<<n6<<"."<<(n3*10+n4)-20<<".18"<<n1<<n2<<" ";
                         if((n/10)%2==0) cout<<"M\n";
                         else cout<<"F\n";
                        }
                       else cout<<"Bad input data!\n";
                       }
                    }
                    else
                   {
                     if(n3*10+n4==4+20 || n3*10+n4==6+20 || n3*10+n4==9+20 || n3*10+n4==11+20)
                      { maxdays=30;
                         if(maxdays>=n5*10+n6 && n5*10+n6>0)
                         { cout<<n5<<n6<<"."<<(n3*10+n4)-20<<".18"<<n1<<n2<<" ";
                           if((n/10)%2==0) cout<<"M\n";
                           else cout<<"F\n";
                          }
                          else cout<<"Bad input data!\n";
                       }
                     else
                      { maxdays=28+isleap;
                       if(maxdays>=n5*10+n6 && n5*10+n6>0)
                       { cout<<n5<<n6<<"."<<(n3*10+n4)-20<<".18"<<n1<<n2<<" ";
                        if((n/10)%2==0) cout<<"M\n";
                        else cout<<"F\n";
                       }
                       else cout<<"Bad input data!\n";
                      }
                    }
                   }
                else
               {
                 if ((40<n3*10+n4)&&(n3*10+n4<53))
                 {
                     if(n3*10+n4==1+40 || n3*10+n4==3+40 || n3*10+n4==5+40 || n3*10+n4==7+40 || n3*10+n4==8+40 || n3*10+n4==10+40 ||n3*10+n4==12+40)
                    {
                      {  maxdays=31;
                         if(maxdays>=n5*10+n6 && n5*10+n6>0)
                         {cout<<n5<<n6<<"."<<(n3*10+n4)-40<<".20"<<n1<<n2<<" ";
                          if((n/10)%2==0) cout<<"M\n";
                          else cout<<"F\n";
                          }
                         else cout<<"Bad input data!\n";
                       }
                     }
                     else
                    {
                      if(n3*10+n4==4+40 || n3*10+n4==6+40 || n3*10+n4==9+40 || n3*10+n4==11+40)
                      { maxdays=30;
                        if(maxdays>=n5*10+n6 && n5*10+n6>0)
                       { cout<<n5<<n6<<"."<<(n3*10+n4)-40<<".20"<<n1<<n2<<" ";
                         if((n/10)%2==0) cout<<"M\n";
                         else cout<<"F\n";
                       }
                        else cout<<"Bad input data!\n";
                      }
                      else
                       { maxdays=28+isleap;
                         if(maxdays>=n5*10+n6 && n5*10+n6>0)
                         { cout<<n5<<n6<<"."<<(n3*10+n4)-40<<".20"<<n1<<n2<<" ";
                           if((n/10)%2==0) cout<<"M\n";
                           else cout<<"F\n";
                         }
                         else cout<<"Bad input data!\n";
                       }
                   }
                 }
                   else cout<<"Bad input data!\n";
               }
              }
             }
            }
           else cout<<"Bad input data!\n";
        }
        else cout<<"Bad input data!\n";
    }
 return 0;
 }
