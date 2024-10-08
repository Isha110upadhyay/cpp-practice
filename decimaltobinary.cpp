#include<iostream>
using namespace std;
int decimaltobinary(int i){
    int rem,ans=0,pow=1;
    while(i>0){
    rem=i%2;
    i=i/2;
    ans+=(rem*pow);
    pow=pow*10;
    }
    return ans;

}
int main(){
    int num;
    cout<<"ENTER ANY NUMBER : ";
    cin>>num;
    for(int i=1;i<=num;i++){
    cout<<"BINARY FORM OF "<<i<<" IS "<<decimaltobinary(i)<<endl;
    }
    return 0;
}
