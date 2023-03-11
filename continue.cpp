#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        cout<<"Hi"<<endl;
        cout<<"Hey"<<endl;
        //continue ke baad vali statements execute nhi hoti skip ho jati h
        continue;
        cout<<"Namaste";
    }
    return 0;
}