#include<iostream>
using namespace std;
int unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int size=7,arr[7]={1,2,3,1,2,3,4};
    cout<<"UNIQUE ELEMENT IS "<<unique(arr,size);
    return 0;
}