 #include<iostream>
 using namespace std;
 int main()
 {
    int num,largest=0;
    cout<<"Enter a number: ";
    cin>>num;
    if(num==0)
    largest=0;
    else
    do
    {
      int n=num%10;
      if(n>largest){
      largest=n;
      }
      num=num/10;
    } while (num!=0);
    cout<<"The largest digit : "<<largest<<endl;
    return 0;
    
 }