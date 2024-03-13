#include<iostream>
using namespace std;

int main()
{
    int num,first,last;
    cout<<"enter the number"<<endl;
    cin>>num;
    last = num%10;
    first = num;
    while(first>=10)
    {
        first/=10;
    }
    cout<<"first digit is:"<<first<<endl;
    cout<<"lats digit is:"<<last<<endl;
    return 0;
}
