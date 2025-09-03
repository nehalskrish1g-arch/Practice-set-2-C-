#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"Enter a Number:";
    cin>>n;
    if(n<=1)
    cout<<"Not a Prime Number";
    else
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        count++;
        break;
    }
    if(count==0)
    cout<<"Prime Number";
    else
    cout << "Not a Prime Number";
    return 0;
}