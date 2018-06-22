#include <iostream>

using namespace std;
const int MAX =30;
//checks if a array is ascending
bool isAscending (int a[], int n)
{
    int inx =0;
    while (inx < n-1 && a[inx]<=a[inx+1]) inx++;
    return inx == n-1;

}
//checks if a array is descending
bool isDescending (int a[], int n)
{
    int inx =0;
    while (inx < n-1 && a[inx]>=a[inx+1]) inx++;
    return inx == n-1;
}
//checks if a array is a triangular : first half is ascending, second - is descending
//if array has odd length, the middle element should take apart in both functions
bool isTriangular (int a[], int n)
{
return (n%2==0)?isAscending(a,n/2) && isDescending(a+n/2,n/2) :
                isAscending(a,n/2+1) && isDescending(a+n/2,n/2+1);
}

void problem1()
{
    int a[MAX],n;
    cin>>n;
    cout<<isTriangular(a,n)<<endl;
}
//checks if a matrix is triangular
bool isTriangularMatrix (int matrix[][5], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i ;j++)
            if(matrix [i][j] != 0) return false;
    }
    return true;
}
void problem2 ()
{
    int matrix [5][5] = {1, 1, 1, 1, 1,
                         0, 1, 1, 0, 1,
                         0, 0, 1, 1, 1,
                         0, 0, 0, 1, 1,
                         0, 0, 0, 0, 1
                        };
    cout<<isTriangularMatrix(matrix,5)<<endl;
}
int main ()
{
    //problem1();
    //program that counts how many times a digit is met in the whole array
    int a[MAX],digits[10],n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<10; i++)
        digits[i] = 0;
    for(int i=0; i<n; i++)
    {
        while(a[i]!=0)
        {
            digits[a[i]%10]++;
            a[i]/=10;
        }
    }
    for (int i=0 ; i<10 ;i++)
        cout<<i<<":"<<digits[i]<<endl;
    return 0;
}
