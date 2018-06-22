#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,counter=0;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) counter++;
    cout<<(counter==0 && n!=1)<<endl;
    return 0;
}
/*************************************/
!!! ДА
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "This is a prime number";
    else
        cout << "This is not a prime number";

    return 0;
}