#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,last,first,temp,swp,c = 0;
    cout<<"enter the number:"<<endl;
    cin>>n;
    temp = n;
    last = temp % 10;
    c = (int)log10(temp);

    while(temp>=10)
    {
       temp = temp / 10;

    }
    first = temp;
    swp = (last * pow(10,c) + first) + (n - (first * pow(10,c)  + last));
    cout<<last<<endl<<first<<endl;
    cout<<swp;
}
