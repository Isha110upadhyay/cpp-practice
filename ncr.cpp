#include<iostream>
using namespace std;
int num(int n){
    int fact1=1;
    for(int i=1;i<=n;i++){
       fact1=fact1*i; 
    }
    return fact1;
}
int rem(int r){
    int fact2=1;
    for(int i=1;i<=r;i++){
       fact2=fact2*i; 
    }
    return fact2;
}
int cem(int c){
    int fact3=1;
    for(int i=1;i<=c;i++){
       fact3=fact3*i; 
    }
    return fact3;
}
int main(){
    int n,c,r,ncr;
    cout<<"ENTER THE VALUE OF n : ";
    cin>>n;
    cout<<"ENTER THE VALUE OF r : ";
    cin>>r;
    c=(n-r);
    ncr=num(n)/(rem(r)*cem(c));
    cout<<ncr;
    return 0;

}