#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
            //break ke baad control loop se bahar aa jata h
        }
    }
    if(isPrime == 0){
        cout<<"Not a prime no."<<endl;
    }else{
        cout<<"Prime no."<<endl;
    }
    return 0;
}