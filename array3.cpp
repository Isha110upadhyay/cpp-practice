#include<iostream>
using namespace std;
int sum(int number[],int size,int s){
for(int i=0;i<size;i++){
       s=s+number[i];
    }
    return s;
}
int fact(int number[],int size,int f){
for(int i=0;i<size;i++){
       f=f*number[i];
    }
    return f;
}
int main(){
    int number[5]={1,2,3,4,5};
    int size=sizeof(number)/sizeof(int);
    int s=0,f=1;
    cout<<"SUM OF ALL ELEMENT IN ARRAY IS : "<<sum(number,size,s)<<endl;
    cout<<"PRODUCT OF ELEMENT ARRAY IS : "<<fact(number,size,f);
    return 0;
}