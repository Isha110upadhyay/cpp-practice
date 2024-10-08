#include<iostream>
using namespace std;
int linearsearch(int number[],int target,int size){
for(int i=0;i<size;i++){
        if(number[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int number[5]={2,8,4,1,6};
    int size=sizeof(number)/sizeof(int);
    int target=6;
    cout<<"THE INDEX OF THE TARGET VALUE IS : "<<linearsearch(number,target,size);
    return 0;
}
    