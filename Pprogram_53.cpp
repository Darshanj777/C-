#include<iostream>
using namespace std;

void Snum(int sn,int en)
{
    int n1,i,j,k,s1,fact;
    for (k = sn; k <= en; k++)
    {
        n1 = k;
        s1 = 0;
        for (j = k; j > 0; j = j / 10)
        {
            fact = 1;
            cout<<j<<"  *\n";
            for (i = 1;i <= j % 10; i++)
            {
                fact = fact * i;
            }
            s1 = s1 + fact;
        }
        if (s1 == n1)
            cout << n1 << "  **\n";
}
}
int main()
{
    int a,b;
    cout<<"enter the 2 numbers"<<endl;
    cin>>a>>b;
    Snum(a,b);
    return 0;
}
