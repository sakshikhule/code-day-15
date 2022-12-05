#include<iostream>
using namespace std;
int main()
{
    int fact=1,num,i,a,rem,sum=0;
    cout<<"enter any no. = ";
    cin>>num;
    for(rem=num;rem>0;rem=rem/10)
    {
        fact=1;
        a=rem1%10;
        for(i=1;i<=a;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    }
    if(num==sum)
    {
        cout<<"strong no.";
    }
    else
    {
        cout<<"not strong no.";
    }
return 0;
}
