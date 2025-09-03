#include<iostream>
using namespace std;
int main()
{
    float marks,avg,sum=0,count=0;
    cout<<"Enter the marks: "<<endl;
    while(true)
    {
        cout<<"Enter mark: ";
        cin>>marks;
        if(marks==-1)
        break;
        sum=sum+marks;
        count++;
    }
    if(count>0)
    {
    avg=sum/count;
    cout<<"The average of the marks: "<<avg<<endl;
    }
    else
    {
    cout<<"The average is not possible: "<<endl;
    }
}