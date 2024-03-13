#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,i,j,ans=0,num;
    cout<<"enter the number"<<endl;
    cin>>n;
    num = n;
    while(n>0)
    {
        i = n%10;
        j = pow(i,4);
        ans += j;
        n = n /10;
    }
    cout<<"ans is"<<ans<<endl;
    if(ans==num)
    {
        cout<<"number is armstrong"<<endl;
    }
    else
    {
        cout<<"number is not armstrong";
    }

}
