#include<iostream>
using namespace std;
int main()
{
    int n,p,sum=0,n1;
    cout<<"Enter a number: ";
    cin>>n;
    n1=n;
    while(n!=0)
    {
        p=n%10;
        sum=sum+p*p*p;
        n=n/10;
    }
    if(n1==sum)
    {
        cout<<"The given number is armstrong number";
    }
    else 
    {
        cout<<" The given number is not a armstrong number";
    }
    return 0;
}