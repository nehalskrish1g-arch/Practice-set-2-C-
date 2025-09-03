//Palindrone number
#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0,remainder,temp;
    cout<<"Enter the number: ";
    cin>>n;

    for(temp=n;temp!=0;)
    {
        remainder=temp%10;
        reverse=reverse*10+remainder;
        temp=temp/10;
    }
    cout<<"The Reversed number: "<<reverse;
    if(n==reverse)
    cout<<endl<<n<<" Is a Palindrone number. ";
    else
    cout<<endl<<n<<" Is Not a Palindrone number. ";
    return 0;
}