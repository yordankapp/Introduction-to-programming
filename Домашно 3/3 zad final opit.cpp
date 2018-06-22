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
#include<iostream>
#include<cstring>
using namespace std;
void swap (char* str1, char* str2)
{
	 char ch= * str2;
	*str2 = *str1;
	*str1=ch;
}
void reverse (char* helper, int first, int lenght)
{
	if(lenght-first==1) helper; 
	else
	{
		  swap(* (helper+first), * (helper+lenght-1));
	   	  reverse(helper, first+1, lenght);
	}
}
void gethelp(char *str,int n)
{
	if(* str=='\0') return;
	else 
	{
	 bool flag=false;
	 char helper[10001], znak[2];
	 int counter=n;
	 int j=0,first=0, lenght;
	 for(int i=0;str[i]!='\0' && str[i]!=' ' && str[i]!=',' && str[i]!='.' ;i++)
	 {
		helper[j]=str[i];
		j++;
		znak[0]=str[i+1];
		if((str[i+2]==',' && str[i+2]==' ') && str[i]!='\0')
		{
			znak[1]==str[i+2];
			flag=true;
		}
	 }
	 lenght=strlen(helper);
	 while(counter>0)
	 {
	  reverse(helper,first, lenght);
	  counter--;	
	 }
	 if(flag==false)
	  {
	   cout<<helper<<znak[0];
	   counter=n;
	   gethelp(str+lenght+1,n);
      }
	 else 
	 {
	  cout<<helper<<znak[0]<<znak[1];
	  counter=n;
	  gethelp(str+lenght+1,n);
     }
   }
}
int main()
{
	int n;
	char str[10001];
	cin.getline(str,10001);
	cin>>n;
	gethelp(str,n);
	return 0;
}
