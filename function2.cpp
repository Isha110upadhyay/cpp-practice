#include<iostream>
using namespace std;
int sum(int a,int b)
{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int mul(int a,int b)
{
return a*b;
}
int divi(int a,int b)
{
return a/b;
}
int mod(int a,int b)
{
return a%b;
}
int main(){
    
    cout<<"sum is : "<<sum(3,4)<<endl;
    cout<<"subtraction is : "<<sub(6,7)<<endl;
    cout<<"multiply is : "<<mul(3,4)<<endl;
    cout<<"division is : "<<divi(8,3)<<endl;
    cout<<"modulus is : "<<mod(4,5)<<endl;
    return 0;
}