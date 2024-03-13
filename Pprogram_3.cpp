#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  cout<<"enter the two numbers"<<endl;
  cin>>a>>b;
  c = a;
  a = b;
  b = c;

  cout<<a<<endl<<b;
  return 0;
}
