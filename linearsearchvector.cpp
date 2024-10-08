#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5,6,7};
    int target =4;
    int size=vec.size();
    for(int i=0;i<size;i++){
        if(target==vec[i]){
            cout<<"TARGET IS IN "<<i+1<<" POSITION";
            return 0;
        }
    }
    cout<<"TARGET IS NOT FOUND ";
    return 0;
}