#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF LINES :  ";
    cin>>n;
    for(int i=0;i<=(n-1);i++){
        for(int j=1;j<=i+1;j++){
         cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}