#include<iostream>
using namespace std;

int strL(char *);

int main()
{
    char text[70];
    int length;

    cout<<"enter the text"<<endl;
    cin>>text;

    length = strL(text);

    cout<<"text is"<<text<<endl;
    cout<<"length is"<<length<<endl;
}
int strL(char *str)
{
    int len = 0;
    for(len=0;str[len]!='\0';len++){}
    return len;


}
