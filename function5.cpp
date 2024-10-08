#include<iostream>
#include<string>
using namespace std;
string prime_no(int n){
    int i=2;
    bool isprime=true;
    while(i<=n-1){
if(n%i==0){
    isprime=false;
    break;
}
i++;
    }
    if(isprime==true){
        return "PRIME NUMBER" ;
        }else{
            return "NOT A PRIME NUMBER";
        }
}
int main(){
    int n;
    cout<<"ENTER ANY NUMBER : ";
    cin>>n;
    cout<<n<<" IS A "<< prime_no(n);
    return 0;
}