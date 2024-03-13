#include<iostream>
using namespace std;

int main()
{
    int arr[4]={23,-5,-90,6};
    for(int i=0;i<4;i++)
    {
        if(arr[i]<0)
        {
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}
