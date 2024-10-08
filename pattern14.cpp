#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF LINES : ";
    cin>>n;
    //char ch ='A';
    for(int i=1;i<=n;i++){
    for(char j=i+64;j>=65;j--){
        cout<<j;
        //ch++;
    }
    cout<<endl;
    }
    return 0;
}