#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int>& vec,int size) {
   int start=0,end=size-1;
   while(start<end){
    swap(vec[start],vec[end]);
    start++;
    end--;
   }
}
int main(){
    vector<int>vec={1,2,3,4,5,6,7};
     int size=vec.size();
    cout<<" ORIGINAL VECTOR : ";
       for(int i=0;i<size;i++){
        cout<<vec[i]<<"  ";
       }
       //REVERSED VECTOR 
       reverseArray(vec,size);
       cout<<endl;
       cout<<" REVERESED VECTOR : ";
       for(int i=0;i<size;i++){
        cout<<vec[i]<<"  ";
       }
    return 0;
}