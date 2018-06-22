/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 1
 * @compiler GCC
 *
 */
#include<iostream>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
    if(n<=0||n>3000)
        cout<<"Invalid number!\n";
    else
    {
        if(n>=1000)
        { p=n/1000;
          if(p==1){cout<<"M";}
          if(p==2){cout<<"MM";}
          if(p==3){cout<<"MMM";}
        }
        n=n%1000;
        if(n<=999)
        {
            p=n/100;
            if(p==1)cout<<"C";
            if(p==2)cout<<"CC";
            if(p==3)cout<<"CCC";
            if(p==4)cout<<"CD";
            if(p==5)cout<<"D";
            if(p==6)cout<<"DC";
            if(p==7)cout<<"DCC";
            if(p==8)cout<<"DCCC";
            if(p==9)cout<<"CM";
        }
        n=n%100;
        if(n<=99)
        {
            p=n/10;
            if(p==1)cout<<"X";
            if(p==2)cout<<"XX";
            if(p==3)cout<<"XXX";
            if(p==4)cout<<"XL";
            if(p==5)cout<<"L";
            if(p==6)cout<<"LX";
            if(p==7)cout<<"LXX";
            if(p==8)cout<<"LXXX";
            if(p==9)cout<<"XC";
        }
        n=n%10;
        if(n<=9)
        {
            p=n;
            if(p==1)cout<<"I\n";
            if(p==2)cout<<"II\n";
            if(p==3)cout<<"III\n";
            if(p==4)cout<<"IV\n";
            if(p==5)cout<<"V\n";
            if(p==6)cout<<"VI\n";
            if(p==7)cout<<"VII\n";
            if(p==8)cout<<"VIII\n";
            if(p==9)cout<<"IX\n";
        }
    }
    return 0;
}
