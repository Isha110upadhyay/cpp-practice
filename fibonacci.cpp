#include<iostream>
using namespace std;
int main()
{
    int n,f,f1=-1,f2=1;
    cout<<"ENTER ANY NUMBER : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        f=f1+f2;
        f1=f2;
        f2=f;
        cout<<f<<"  ";
    }
    return 0;
}