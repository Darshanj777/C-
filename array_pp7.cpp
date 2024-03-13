#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter the number of element: "<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n/2;i++)
    {
        for(j=n/2;j<n;j++)
        {
            if(arr[i]!=arr[j+1])
            {
                cout<<"unique :"<<arr[i]<<endl<<arr[j+1]<<endl;
            }
            else
            {
                cout<<"equal :"<<arr[i]<<endl<<arr[j+1]<<endl;
            }


        }
    }
    return 0;
}
