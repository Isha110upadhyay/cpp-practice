#include<iostream>
using namespace std;
int main(){
    int num,digit,sum=0;
    cout<<"ENTER ANY NUMBER : ";
    cin>>num;
    while(num>0)
    {
        digit=num%10;
        num=num/10;
        sum=sum+digit;
    }
    cout<<"SUM OF DIGITS OF A "<<num<<" IS : "<<sum;
    return 0;
}