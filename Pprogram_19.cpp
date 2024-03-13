#include<iostream>
using namespace std;

int main()
{
    int meritNO,age;
    char grade;
    cout<<"enter your merit number"<<endl;
    cin>>meritNO;
    cout<<"enter your age"<<endl;
    cin>>age;
    cout<<"enter your grade"<<endl;
    cin>>grade;
    if((meritNO>=1 && meritNO<=1000) && age>=18 && (grade>='A' && grade<='C'))
    {
        cout<<"addmission in IT"<<endl;

    }
    else if((meritNO>=1000 && meritNO<=2000) && age>=18 && (grade>='A' && grade<='E'))
    {
        cout<<"addmission in EC"<<endl;
    }
    else if((meritNO>=2000 && meritNO>=3000) && age>=18 && (grade>='A' && grade<='G'))
    {
        cout<<"addmission in EE"<<endl;
    }
    else
    {
        cout<<"not get addmission in ADIT"<<endl;
    }
    return 0;

}
