#include<iostream>
using namespace std;
void reverse_array(int arr[],int size){
int start=0,end=size-1;
while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}
int main(){
    int arr[7]={5,7,9,3,2,8,4};
    int size=7;
reverse_array(arr,size);
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;
}