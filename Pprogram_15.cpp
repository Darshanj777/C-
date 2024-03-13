#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"enter the character"<<endl;
    cin>>c;

    if(c>='a' && c<='z')
    {
        cout<<"lowercase"<<endl;
    }
    else if(c>='A' && c<='Z')
    {
        cout<<"upper case"<<endl;
    }
    else

        {
          cout<<"special character";
        }

}
