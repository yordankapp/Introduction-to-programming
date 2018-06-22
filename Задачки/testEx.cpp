#include <iostream>

using namespace std;
//checks if there are alternately bits 21-->10101 -> yes
//                                     43-->101011 ->no
bool isMagic() (int n)
{
    return ((n^(n>>1)) & ((n^(n>>1))+1)) == 0;
}
//count the elements having at least 2 divisor before them in the array
int findAtLeast2Divisors (int a[] , int n)
{
    int countNums = 0;
    for (int i = 2 ; i<n; i++)
    {
        int counter = 0;
        for (int j=0; j<i ;j++)
        {
           if(a[i]%a[j]==0)
           {
               counter++;
           }

        }
        if(counter>=2)
        {
            countNums++;
        }
    }
    return countNums;
}
int main ()
{
    //counts how many even bits are up
    unsigned int a;
    cin>>a;
    int counter = 0 ;
    //a>>=1; --> if we want to count how many odd bits are up
    while (a)
    {
        counter+=(a & 1);
        a>>=2; //if we want to count how many bits are up then here we have a>>=1;
    }
    cout<<counter;
    //tests for isMagic() function
    cout<<isMagic(10)<<" == 1"<<endl;
    cout<<isMagic(21)<<" == 1"<<endl;
    cout<<isMagic(85)<<" == 1"<<endl;
    cout<<isMagic(43)<<" == 0"<<endl;
    cout<<isMagic(6)<<" == 0"<<endl;
    cout<<isMagic(7)<<" == 0"<<endl;
    //finds how many elements have this property: before them in the array to have at least 2 divisors
    int a[] = {2,3,6,5,10,8};
    cout<<findAtLeast2Divisors(a,6)<<endl;



    return 0;
}
