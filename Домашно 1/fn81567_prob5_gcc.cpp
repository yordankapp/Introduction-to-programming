/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 5
 * @compiler GCC
 *
 */
#include<iostream>
using namespace std;
int main()
{
 double x,y,u,v;
 int points;
 cin>>x>>y>>u>>v;
 bool red,green,white,redfalse,greenfalse,whitefalse;
 int redgr,greengr,whitegr,redfalsegr,greenfalsegr,whitefalsegr;
 white=(x*x+ y*y<1);
 green=(x*x+ y*y<9) && !white;
 red=(x*x+y*y<64) && !green && !white;
 whitefalse=((u+x)*(u+x)+(v+y)*(v+y)<1);
 greenfalse=((u+x)*(u+x)+(v+y)*(v+y)<9) && !whitefalse;
 redfalse=((u+x)*(u+x)+(v+y)*(v+y)<64) && !greenfalse && !whitefalse;
 whitegr=x*x+y*y;
 greengr=x*x+y*y;
 redgr= x*x+y*y;
 whitefalsegr=(u+x)*(u+x)+(v+y)*(v+y);
 greenfalsegr=(u+x)*(u+x)+(v+y)*(v+y);
 redfalsegr=(u+x)*(u+x)+(v+y)*(v+y);
 if (white==true && whitefalse==true) points=60;
 else
 {
    if (whitegr==1 && whitefalsegr==1) points=0;
    else
    {
      if(green==true && greenfalse==true  || green==false && greenfalse==true || green==true && greenfalse==false ) points=20;
      else
      {
         if(greengr==9 && greenfalsegr==9) points=0;
         else
         {
             if(red==true && redfalse==true) points=10;
             else
             {
                 if(redgr==64 && redfalsegr==64) points=0;
                 else points=0;
             }
         }
      }
    }
 }
 cout<<points;
 return 0;
}
