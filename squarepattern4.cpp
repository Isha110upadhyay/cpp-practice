#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF LINES :  ";
    cin>>n;
    int num=1;
    for(int i=0;i<=(n-1);i++){
        for(int j=0;j<=n-1;j++){
         cout<<num<<" ";
         num=num+1;
        }
        cout<<endl;
    }
    return 0;
}