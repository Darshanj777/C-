#include<iostream>
using namespace std;
int main()

{
    char a;
    cout<<"enter the character\t"<<endl;
    cin>>a;
    (a >= 'a' && a <= 'z')? cout<<"lower case" : cout<<"upper case";

    return 0;


}
