#include<iostream>
using namespace std;
int main(){
    //Input binary no.
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n>>1;
    }
    cout<<"No. of set bits = "<<count<<endl;
    return 0;
}