/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 10
 * @compiler GCC
 *
 */
 #include<iostream>
 using namespace std;
 int main()
 {
 	bool flag=false;
	char str[1000];
 	char mas[5][5];
 	for(int i=0;i<5;i++)
 	{
 		for(int j=0;j<5;j++)
 		   cin>>mas[i][j];
	}
	cin.getline(str,1000);
	for(int i=0;i<5;i++)
 	{
 		for(int j=0;j<5;j++)
 		   {
			if(mas[i][j]<65 || mas[i][j]>90)
			   cout<<"Bad table!\n";
			  break;
			}
		break;
	}
    for(int i=0;i<5;i++)
 	{
 		for(int j=0;j<5;j++)
 		   {
			if(mas[i][j]==mas[i][j+1])
			    flag=true;
			}
	}
	for(int i=0;i<5;i++)
 	{
 		for(int j=0;j<5;j++)
 		   {
			if(mas[i][j]==mas[i+1][j])
			    flag=true;
			}
	}
	if(strlen(str)%2!=0)
	
	if(flag==true)
	  cout<<"Bad table!\n";
	return 0;
 }
