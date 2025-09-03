#include<iostream>
using namespace std;
int main()
{
    int num1,num2,HCF,i=1;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    
    if(num2>num1)
    {
    int temp = num2;
    num2=num1;
    num1= temp;
    }
    while(i<=num2)
    {
        if(num1%i==0 && num2%i==0)
        {
            HCF=i;
        }
        i++;
    }
    cout<<"HCF = "<<HCF;
    return 0;


}