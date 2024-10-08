#include<iostream>
#include <climits>
using namespace std;
void swapsmallandlarge(int number[],int size){
     int smallest =INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;
    for (int i = 0; i < size; i++) {
        if (number[i] < smallest) {
            smallest = number[i];
            smallestIndex = i;
        }
        if (number[i] > largest) {
            largest = number[i];
            largestIndex = i;
        }
    }
    if (smallestIndex != -1 && largestIndex != -1) {
        swap(number[smallestIndex], number[largestIndex]);
    }
}
    // these lines only change the values of largest and smallest values not the actual element in array
    // for(int i=0;i<size;i++){
    //     smallest=min(smallest,number[i]);
    //     largest=max(largest,number[i]);
    //     swap(smallest,largest);
int main(){
    int number[5]={2,8,4,1,6};
    int size=sizeof(number)/sizeof(int);
    swapsmallandlarge(number,size);
    for(int i=0;i<size;i++){
cout<<number[i]<<" ";
    }
    return 0;
}