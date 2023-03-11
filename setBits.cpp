#include<iostream>
using namespace std;
int countSetBits(int x, int y){
    int c1=0, c2=0, count=0;
    while(x!=0 && y!=0){
        if(x&1){
            c1++;
        }
        x=x>>1;
        if(y&1){
            c2++;
        }
        y=y>>1;
    }
    count = c1+c2;
    return count;
}
int main(){
    int a, b;
    cin>>a>>b;
    int ans=countSetBits(a,b);
    cout<<"Total no. of set bits in "<<a<<" & "<<b<<" = "<<ans<<endl;
    return 0;
}