/*
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Yordanka Petrova
 * @idnumber 81567
 * @task 2
 * @compiler GCC
 *
 */
#include <iostream>
using namespace std;
 void primenumbers(int n)
{
    int limit = (n < 5) ? 50 : n*n;
    int a[limit];
    for(int i=0; i<limit; i++)
        a[i] = 1;
    int temp = 0;
    int count = 0;
    for(int i=3; i<limit+n; i += 2)
    {
        if (count == n)
        {
            break;
        }
        if(a[i])
        {
            for(int j=i; i*j < limit; j++)
                a[i*j] = 0;
            if (temp == 0)
            {
              temp = i;
            } else
            {
                if (temp + 2 == i)
                {
                    cout << temp << " " << i << endl;
                    count++;
                    temp = i;
                }
                else
                {
                    temp = i;
                }
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    if(n<100000)
    {
    primenumbers(n);
    }
    return 0;
}
