#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3};
    int size=vec.size();
    cout<<"BEFORE PUSH BACK OPERATION SIZE IS "<<size<<endl;
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"AFTER PUSH BACK OPERATION SIZE IS "<<vec.size()<<endl;
    cout<<endl;
    vec.pop_back();
    vec.pop_back();
    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"FRONT ELEMENT IS "<<vec.front()<<endl;
    cout<<vec[2]<<endl;
    cout<<"BACK ELEMENT IS " <<vec.back();
    return 0;
}