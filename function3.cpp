#include<iostream>
using namespace std;
int sum_of_n_no(int n)
{
    int i=1,sum=0;
    while(i<=n){
sum=sum+i;
i++;
    }
    return sum;
}
int main(){
int n;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    cout<<"SUM OF FIRST "<<n<<" DIGITS IS : "<<sum_of_n_no(n);
    return 0;
}