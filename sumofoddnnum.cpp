#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"ENTER THE VALUE OF N :  ";
    cin>>n;
    for(int i=1;i<=n;i+=2){
        cout<<i<<endl;
        sum=sum+i;
    }
    cout<<"SUM IS : "<<sum;
    return 0;
}