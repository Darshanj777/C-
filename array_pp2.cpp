#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    int arr[4]={23,-5,-90,6};
    for(int i=0;i<4;i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
