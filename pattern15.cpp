// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER OF LINES :  ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         //inner loop for space
//         for(int j=0;j<i;j++){
//          cout<<" ";
//         }
//         //inner loop for number
//         for(int j=0;j<n-i;j++){
//          cout<<i+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF LINES :  ";
    cin>>n;
    for(int i=0;i<n;i++){
        //inner loop for space
        for(int j=0;j<i;j++){
         cout<<" ";
        }
        //inner loop for number
        for(int j=0;j<n-i;j++){
         cout<<char(i+65);
        }
        cout<<endl;
    }
    return 0;
}