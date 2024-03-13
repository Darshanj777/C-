#include<iostream>
using  namespace std;

int main()
{
    int ph,ch,mt;
    float pr;
    cout<<"enter marks of your subjact"<<endl;
    cin>>ph>>ch>>mt;

    pr = (ph+ch+mt)/3;
    cout<<"pr:\t"<<pr<<endl;

    if(pr<=99 && pr>=80)
    {
        cout<<"pass with grade:A"<<endl;
    }
    else if(pr>=80 && pr<=70)
    {
        cout<<"pass with grade:B"<<endl;
    }
    else
    {
        cout<<"pass with grade:C"<<endl;
    }

}
