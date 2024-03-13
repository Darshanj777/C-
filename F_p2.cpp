#include <stdio.h>
#include <iostream>
using namespace std;


int checkPrimeNumber(int n);
int main()
{
    int n1, n2, i, flag;

    cout<<"Number 1: ";
    cin>>n1;
    cout<<"Number 2: ";
    cin>>n2;

    cout<<"Prime numbers between "<<n1<<" and "<<n2<<" are: ";

    for(i=n1+1; i<n2; ++i)
    {
        // i is a prime number, flag will be equal to 1
        flag = checkPrimeNumber(i);

        if(flag == 1)
            cout<<i<<"   ";
    }
    return 0;
}

// user-defined function to check prime number
int checkPrimeNumber(int n)
{
    int j, flag = 1;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}
