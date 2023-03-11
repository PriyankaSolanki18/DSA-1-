#include<iostream>
using namespace std;
int ap(int n){
    int a=((3*n)+7);
    return a;
}
int main(){
   int n;
   cin>>n;
   int ans=ap(n);
   cout<<"(3 * "<<n<<" + 7) = "<<ans<<endl;
   return 0;
}