#include<iostream>
using namespace std;
int main()
{
    int num=50;
    cout<<"Odd Numbers from 1 to 50 are: "<<endl;
    for(int i=1;i<=num;i++)
    {
        if(i%2!=0)
        cout<<i<<endl;
    }
    return 0;
}