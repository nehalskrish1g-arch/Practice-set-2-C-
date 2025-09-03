#include<iostream>
using namespace std;
int main()
{
    int b;
    float a,result=1;
    cout<<" Enter the values of a and b : ";
    cin>>a>>b;
    cout<< a << "^" << b << "=";
    while(b!=0)
    {
        result=result*a;
        b--;
    }
    cout<<result;
    return 0;
}