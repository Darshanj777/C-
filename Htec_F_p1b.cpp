// call by reference variables.

#include<iostream>
using namespace std;
void swapRv(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 4,b = 9;
    swapRv(a,b);
    cout<<a<<"\n"<<b;
}


