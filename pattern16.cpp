#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF LINES :  ";
    cin>>n;
    for(int i=0;i<n;i++){
        //inner loop for space
        for(int j=0;j<n-i-1;j++){
         cout<<" ";
        }
        //inner loop for number
        for(int j=1;j<=i+1;j++){
         cout<<j;
        }
        //inner loop for number 2
        for(int j=i;j>=1;j--){
         cout<<j;
        }
        cout<<endl;
    }
    return 0;
}