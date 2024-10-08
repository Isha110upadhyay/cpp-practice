#include<iostream>
using namespace std;
int main(){
int num,m=1;
cout<<"ENTER ANY NUMBER :";
cin>>num;
for(int i=2;i<=num;i++){
    m=1;
    for(int j=2;j<=(i/2);j++){
        if(i%j ==  0){
         m=0;
         break;
        }
    }
    if(m==1){
        cout<<i<<" ";

    }
      
}
return 0;
}
