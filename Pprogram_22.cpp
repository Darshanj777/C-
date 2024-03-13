#include<iostream>
using namespace std;

int main()
{
    int n500,n100,n50,n20,n10,n5,n1,n2;
    int amount;
    n500=n100=n50=n20=n10=n5=n1=n2=0;
    cout<<"enter the amount"<<endl;
    cin>>amount;

    if(amount>=500)
    {
        n500=amount/500;
        amount=amount-(n500*500);
    }
    if(amount>=100)
    {
        n100=amount/100;
        amount=amount-(n100*100);
    }
    if(amount>=50)
    {
        n50=amount/50;
        amount=amount-(n50*50);
    }
    if(amount>=20)
    {
        n20=amount/20;
        amount=amount-(n20*20);
    }
    if(amount>=10)
    {
        n10=amount/10;
        amount=amount-(n10*10);
    }
    if(amount>=5)
    {
        n5=amount/5;
        amount=amount-(n5*5);
    }
    if(amount>=2)
    {
        n2=amount/2;
        amount=amount-(n2*2);
    }
    if(amount>=1)
    {
        n1=amount;

    }
    cout<<"total numbers of notes"<<endl;
    cout<<"notes of 500 = "<<n500<<endl;
    cout<<"notes of 100 = "<<n100<<endl;
    cout<<"notes of 50 = "<<n50<<endl;
    cout<<"notes of 20 = "<<n20<<endl;
    cout<<"notes of 10 = "<<n10<<endl;
    cout<<"notes of 5 = "<<n5<<endl;
    cout<<"notes of 2 = "<<n2<<endl;
    cout<<"notes of 1= "<<n1<<endl;

    return 0;
}
