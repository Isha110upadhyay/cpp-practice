#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"ENTER ANY CHARACTER : "<<endl;
    cin>>ch;
    if(ch==97||ch==101||ch==105||ch==111||ch==117||ch==65||ch==69||ch==73||ch==79||ch==85){
        cout<<"CHARACTER IS VOWEL ";
    }else{
        cout<<"CHARACTER IS CONSONANT";
    }
    return 0;
}