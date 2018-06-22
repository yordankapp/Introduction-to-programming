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
#include<cstring>
using namespace std;
char* swap(char* helper, int counter, int lenght )
{
   char* word= new char[lenght+2];
   for (int i = 0; i < lenght-counter; i++)
        *(word+i) = *(helper+i+counter);

    for (int j = 0; j < counter; j++)
        *(word+lenght-counter+j) = * (helper+j);
        
	for (int j = 0; j < lenght+2; j++)
		{
			if(word[j+1]>= 65 && word[j+1]<= 90)
			{
			  for (int i = 0; i < 32; i++) 
                word[0]--;
    
              for (int k = 0; k < 32; k++)
                word[lenght-1]++;
	    	}
	   }	
   cout<<word;
}

void piglatin(char* helper, int first, int lenght)
{	
	int counter=0;
	if(*helper=='a' || *helper=='e' ||  *helper=='i'|| *helper=='o' || *helper=='u' || *helper=='y' || *helper=='A' || *helper=='E' ||  *helper=='I' || *helper=='O' || *helper=='U' || *helper=='Y')
	    cout<<helper<<"way";
	else
	{
	  	while(first<lenght)
		{
		   if(*(helper+first)!='a' && *(helper+first)!='e' &&  *(helper+first)!='i' && *(helper+first)!='o' && *(helper+first)!='u' && *(helper+first)!='y' && *(helper+first)!='A' && *(helper+first)!='E' &&  *(helper+first)!='I' && *(helper+first)!='O' && *(helper+first)!='U' && *(helper+first)!='Y')
	      {
	   	   counter++;
	   	   first++;
	      }
	      else break;
	    }
		swap(helper, counter,lenght);
		cout<<"ay";
	}
	first=0;
	counter=0;
}
void gethelp(char *str)
{
	if(* str=='\0') return;
	else 
	{
	 bool flag=false;
	 char helper[10001],znak[2];
	 int j=0,first=0, lenght;
     for(int i=0; str[i]!='\0' && str[i]!='0' && str[i]!='1' && str[i]!='2' && str[i]!='3' && str[i]!='4' &&  str[i]!='5' && str[i]!='6' && str[i]!='7' && str[i]!='8' && str[i]!='9' && str[i]!=' ' && str[i]!='.' && str[i]!=',' && str[i]!=';' && str[i]!='-' && str[i]!='!' && str[i]!='?' && str[i]!='"'&& str[i]!=':';i++)  // not working with ASCII
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
	 piglatin(helper,first, lenght);
	 if(flag==false)
	  {
	   cout<<znak[0];
	   gethelp(str+lenght+1);
      }
	 else 
	 {
	  cout<<znak[0]<<znak[1];
	  gethelp(str+lenght+1);
     }
   }
}
int main()
{
	char str[10001];
	cin.getline(str,10001);
	gethelp(str);
	return 0;
}
