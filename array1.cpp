// #include<iostream>
// using namespace std;
// int main(){
//     int smallestnumber[5]={2,8,4,1,6};
//     int size=sizeof(smallestnumber)/sizeof(int);
//     //cout<<size;
//     int num=smallestnumber[0];
//     for(int i=smallestnumber[0];i<size;i++){
//         if(i<num){
//             num=i;
//         }
//     }
//     int num1=smallestnumber[0];
//     for(int i=smallestnumber[0];i<size;i++){
//         if(i>num1){
//             num1=i;
//         }
//     }
//     cout<<"SMALLEST NUMBER IN ARRAY IS : "<<num<<endl;
//     cout<<"GREATEST NUMBER IN ARRAY IS : "<<num1;
//     return 0;
// }

#include<iostream>
#include <climits>
using namespace std;
int main(){
    int number[5]={2,8,4,1,6};
    int size=sizeof(number)/sizeof(int);
    //cout<<size;
    int smallest =INT_MAX;
    int largest = INT_MIN;
    for(int i=0;i<size;i++){
        smallest=min(smallest,number[i]);
        largest=max(largest,number[i]);
    }
    cout<<"SMALLEST NUMBER IN ARRAY IS : "<<smallest<<endl;
    cout<<"LARGEST NUMBER IN ARRAY IS : "<<largest;
    return 0;
}