#include<iostream>
using namespace std;

int main()
{
    int num,first,last,sum;
    cout<<"enter the number"<<endl;
    cin>>num;
    last = num%10;
    first = num;
    while(first>=10)
    {
        first=first/10;
    }
    cout<<"first digit:"<<first<<endl<<"last digit:"<<last<<endl;
    sum = first + last;
    cout<<"sum of first and last digit"<<ends<<sum;
    return 0;
}
