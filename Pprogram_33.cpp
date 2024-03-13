#include<iostream>
using namespace std;

int main()
{
    int n,ans=1,e=1;
    cout<<"enter the base"<<endl;
    cin>>n;
    cout<<"enter the exponent"<<endl;
    cin>>e;
    while(e>0)
    {
      ans *= n;
      e--;
    }
    cout<<"base is"<<n<<"so ans is"<<ans;

}
