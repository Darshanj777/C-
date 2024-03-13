#include<iostream>
using namespace std;
int main()
{
    int n,pn=1,i;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n !=0)
    {
        i = n % 10;
        pn = pn * i;
        n = n /10;
    }
    cout<<"product of digit is\t"<<pn;

}
