#include<iostream>
using namespace std;

void Num(int n1,int n2,int n3)
{
    if(n1>n2 && n1>n3)
    {
        cout<<"n1 is max"<<endl;
    }
    else if(n2>n1 && n2>n3)
    {
        cout<<"n2 is max"<<endl;
    }
    else
    {
        cout<<"n3 is max"<<endl;
    }

    cout<<endl;

    if(n1<n2 && n1<n3)
    {
        cout<<"n1 is min"<<endl;
    }
    else if(n2<n1 && n2<n3)
    {
        cout<<"n2 is min"<<endl;
    }
    else
    {
        cout<<"n3 is min"<<endl;
    }




}
int main()
{
    int a,b,c;
    cout<<"enter the 3 number"<<endl;
    cin>>a>>b>>c;
    Num(a,b,c);
    return 0;
}
