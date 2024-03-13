#include<iostream>
using namespace std;

int product(int a,int b)
{
    static int  c = 0;
    c++;
    return a*b+c;
}

int main()
{
    int a,b;
    cout<<"enter the number: "<<endl;
    cin>>a>>b;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;

    return 0;
}
