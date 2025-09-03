#include<iostream>
using namespace std;
int main()
{
    int n,i,Term1=0,Term2=1;
    int nextTerm=Term1+Term2;
    cout<<"Enter number of terms : ";
    cin>>n;
    cout<<"The Fibonacci Series: "<<Term1<<Term2;
    for(i=3;i<=n;i++)
    {
        cout<<nextTerm;
        Term1=Term2;
        Term2=nextTerm;
        nextTerm=Term1+Term2;
    }
    return 0;
}