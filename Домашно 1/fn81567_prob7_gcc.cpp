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
#include<iostream>
using namespace std;
int main()
{
    double x,y;
    bool goodright,goodleft,evilright,evilleft, good, evil;
    cin>>x>>y;
    evilleft=(x<0)&&(((y-3)*(y-3)+x*x<1) || (((y+3)*(y+3)+x*x<9)&&!((y+3)*(y+3)+x*x<1)));
    goodleft=(x<0) && ((x*x+y*y<36)&&!evilleft);
    goodright=(x>0)&& (((y+3)*(y+3)+x*x<1) || (((y-3)*(y-3)+x*x<9)&&!((y-3)*(y-3)+x*x<1)) );
    evilright=(x>0) && ((x*x+y*y<36)&&!goodright);
    good= goodleft || goodright || (x==0 && (-2>y && y>-4));
    evil= evilleft || evilright || (x==0 && (2<y && y<4));
    if(good==true)
        cout<<"Good\n";
    else
    {
        if(evil==true)
           cout<<"Evil\n";
        else  cout<<"Neutral\n";
    }
    return 0;
}
