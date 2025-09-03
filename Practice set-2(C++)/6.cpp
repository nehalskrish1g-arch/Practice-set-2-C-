#include<iostream>
using namespace std;
int main()
{
    int n , reverse=0,remainder;
    cout<<"Enter a number: ";
    cin>>n;
    do
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }while(n!=0);
    cout<<"Reversed number = "<<reverse;
    return 0;
}