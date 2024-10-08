#include<iostream>
using namespace std;
int fact_of_a_no(int n)
{
    int i=1,fact=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    return fact;
}
int main(){
int n;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    cout<<"FACTORIAL OF "<<n<<" IS : "<<fact_of_a_no(n);
    return 0;
}