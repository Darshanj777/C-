#include<iostream>
using namespace std;

int sum(int a,int b);


int main()
{
    int num1,num2;
    cout<<"enter the 2 numbers"<<endl;
    cin>>num1>>num2;
    cout<<sum(num1,num2);
    return 0;
}
int sum(int a,int b){
   int c = a + b;
   return c;
}
