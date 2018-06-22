#include <iostream>
using namespace std;
int *s;
void print(int x, int step,int pos)
{
     if (x==0) 
     {
          --pos;
          cout<<step<<" = ";
          for(int i=0; i<pos;++i)
              cout<<s[i]<<" + ";
          cout<<s[pos]<<endl;
          return;
     }
     for (int i=step; i>0; --i)
     {
         if (x>=i) 
         {
             s[pos]=i;   
             print(x-i,i,pos+1);
         }
     }
}

int main()
{
    int n;
    cin>>n;
    if(n<1 || n>32)
       return 0;
    s=new int[n];
    print(n,n,0);
    delete[] s;
    return 0;
}




/*

#include <iostream>

using namespace std;

int *s;
void out(int x, int step,int pos)
{
     if (x==0) 
     {
          --pos;
          for(int i=0; i<pos;++i)
              cout<<s[i]<<"+";
          cout<<s[pos]<<endl;
          return;
     }
     for (int i=step; i>0; --i)
     {
         if (x>=i) 
         {
             s[pos]=i;   
             out(x-i,i,pos+1);
         }
     }
}

int main()
{
    int n;
    while(1) 
    {
        cout<<"n = ";
        cin>>n;
        if (n<1) break;
        s=new int[n];
        out(n,n-1,0);
        delete[] s;
    }
}

*/
