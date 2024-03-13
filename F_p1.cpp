#include<iostream>
using namespace std;

void print(int num)
{
    cout<<num<<endl;
}

int add(int num1,int num2)
{
    int a,b;
    print(a);
    print(b);
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int a,b;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
    cout<<add(a,b)<<endl;

    return 0;
}

