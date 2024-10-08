#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"ENTER THE AGE : "<<endl;
    cin>>age;
    if(age>=18){
        cout<<"ELIGIBLE FOR VOTE";
    }else{
        cout<<"NOT ELIGIBLE FOR VOTE";
    }
    return 0;
}