#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        sum=sum+i;
    }
    cout<<"The sum of the even integers from 1 to 100: "<<sum<<endl;
    return 0;
}