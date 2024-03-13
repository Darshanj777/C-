#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,i,k,m,x,ans;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        x = i;
        k = i % 10;
        m = pow(k,4);
        ans += m;
        i = i / 10;
       // cout<<"number = "<<x<<endl;
        //cout<<"ans = "<<ans<<endl;
        if(ans==x)
        {
             cout<<x<<"  this number is  armstrog"<<endl;
        }else
        {
            cout<<x<<"  this number is not armstrog"<<endl;
        }
    }

}
