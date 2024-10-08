#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF LINES :  ";
    cin>>n;
    //for upper
    for(int i=1;i<=n;i++){
        //inner loop for star
        for(int j=1;j<=i;j++){
         cout<<"*";
        }
        //inner loop for space
        for(int j=1;j<=(2*n-2*i-2);j++){
         cout<<" ";
        }
        //inner loop for star 2
        for(int j=1;j<=i;j++){
         cout<<"*";
        }
        cout<<endl;
    }//for bottom
        for(int i=n;i>=1;i--){
        //inner loop for star
        for(int j=1;j<=i;j++){
         cout<<"*";
        }
        //inner loop for space
        for(int j=1;j<=(2*n-2*i-2);j++){
         cout<<" ";
        }
        //inner loop for star 2
        for(int j=1;j<=i;j++){
         cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}