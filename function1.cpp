#include<iostream>
using namespace std;
int min_num(int a,int b)
{
if(a>b){
    return b;
}
else{
    return a;
}
}
int main(){
    int a,b;
    cin>>a>>b;
cout<<"MINIMUM NUMBER FROM TWO NUMBERS : "<<min_num(a,b);
return 0;
}