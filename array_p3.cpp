#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,i;
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int Maxn=INT_MIN;
    int Minn=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(arr[i]>Maxn)
        /*{
            Maxn = arr[i];
        }
       if(arr[i]<Minn)
        {
            Minn = arr[i];
        }*/

        Maxn = max(Maxn,arr[i]);
        Minn = min(Minn,arr[i]);
    }
    cout<<Maxn<<" "<<Minn;
    return 0;
}
