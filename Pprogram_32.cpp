#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,rev=0,c,i,j;
    cout<<"enter the number"<<endl;
    cin>>n;
    c = int(log10(n));
    while(n>0)
    {
        i = n % 10;
        j = i * pow(10,c);
        rev = rev + j;
        c--;
        n = n / 10;
    }
    cout<<"rev = "<<rev;
}






