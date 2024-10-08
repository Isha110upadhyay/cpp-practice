/*#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"ENTER ANY CHARACTER : "<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"lower case letter ";
    }else{
        cout<<"upper case letter ";
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"ENTER ANY CHARACTER : "<<endl;
    cin>>ch;
    if(ch>=97&&ch<=122){
        cout<<"lower case letter ";
    }else{
        cout<<"upper case letter ";
    }
    return 0;
}