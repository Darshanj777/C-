#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,rev,c,i,j,a;
    cout<<"enter the number"<<endl;
    cin>>n;
    c = int(log10(n));
    for(rev=0;n>0; n = n / 10)
    {
        i = n % 10;
        j = i * pow(10,c);
        rev = rev + j;
        c--;

    }
      cout<<"rev = "<<rev;
}
