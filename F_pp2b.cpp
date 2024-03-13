#include<iostream>
using namespace std;

int sum(int n1,int n2)
{
    if(n1==n2)
    {
        return n2;
    }
    int prevsum = sum(n1+1,n2);
    return n1 + prevsum;
}

int main()
{
    int n1,n2;
    cout<<"enter the numbers"<<endl;
    cin>>n1>>n2;
    cout<<sum(n1,n2);
}
