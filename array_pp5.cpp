#include<iostream>
using namespace std;

int main()
{
    int  evenN=0;
    int  oddN=0;
    int arr[8] = {1,2,3,4,5,6,7,87};
    for(int i=0;i<8;i++)
    {
        if(arr[i]%2==0)
        {
            evenN++;
        }
        else
        {
            oddN++;
        }
    }
    cout<<"total number of even numbers is "<<evenN<<endl<<"total number of odd numbers is "<<oddN;
    return 0;
}
