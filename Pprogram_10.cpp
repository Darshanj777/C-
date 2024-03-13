#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter the three numbers"<<endl;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is maximum";
        }
        else
        {
            cout<<"c is maximum";
        }
    }
    else
    {
        cout<<"b is maximum";
    }
    return 0;
}
