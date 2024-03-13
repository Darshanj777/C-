#include<iostream>
#include<math.h>
using namespace std;

int LCM(int n1,int n2)
{
    static int k=0;

    k = k + n2;
    cout<<k<<endl;

    if((k%n1==0) && (k%n2==0))
    {
        return k;
    }
    else
    {
        return LCM(n1,n2);
    }
}

int main()
{
    int n1,n2;
    cout<<"enter the 2 numbers"<<endl;
    cin>>n1>>n2;
    cout<<LCM(n1,n2);
    return 0;
}
