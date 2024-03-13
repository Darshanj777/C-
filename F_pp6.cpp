// ************
#include<iostream>
#include<math.h>
using namespace std;

int HCF(int n1,int n2)
{
    int g,h,k;
    if(n1>n2)
    {
        g=n1;
    }
    else
    {
        g=n2;
    }
    if(n1<n2)
    {
        h=n1;
    }
    else
    {
        h=n2;
    }

    if(g%h!=0)
    {

        while(g%h==0)
        {
        if(h%k==0)
        {
            return k;
        }
        }
    }
    else
    {
        return HCF(g,h);
    }


}

int main()
{
    int n1,n2;
    cout<<"enter the 2 numbers"<<endl;
    cin>>n1>>n2;
    cout<<HCF(n1,n2);
    return 0;
}
