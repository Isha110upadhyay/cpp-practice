#include<iostream>
using namespace std;
int main(){
    int num;
    int rem,rev=0;
    cout<<"ENTER ANY NUMBER : ";
    cin>>num;
    while(num>0){
        rem=num%10;
        num=num/10;
        rev=(rev*10)+rem;
    }
    cout<<"REVERSE NUMBER OF "<<num<<" IS "<<rev;
 return 0;
}