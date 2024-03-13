#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    if(n>0)
    {
        cout<<"positive"<<endl;
    }
    else if(n<0)
    {
        cout<<"negative"<<endl;
    }
    else
    {
        cout<<"zero";
    }
    return 0;
}
