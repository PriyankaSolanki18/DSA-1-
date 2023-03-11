#include<iostream>
using namespace std;
int main(){
    // for(int i=0;i<=5;i++){
    //     cout<<i<<" ";
    //     i++;
    // }
    //O/p : 0 2 4 

    // for(int i=0;i<=5;i--){
    //     cout<<i<<" ";
    //     i++;
    // }
    //O/p : Infinte 0

    // for(int i=0;i<=15;i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }
    //O/p : 0 3 6 9 12 15

//     for(int i=0;i<5;i++){
//         for(int j=i;j<=5;j++){
//             cout<<i<<" "<<j<<endl;
//         }
//         cout<<endl;
//     }
//O/p: 0 0
//     0 1
//     0 2
//     0 3
//     0 4
//     0 5

//     1 1
//     1 2
//     1 3
//     1 4
//     1 5

//     2 2
//     2 3
//     2 4
//     2 5

//     3 3
//     3 4
//     3 5

//     4 4
//     4 5

for(int i=0;i<5;i++){
    for(int j=i;j<=5;j++){
        if(i+j == 10){
            break;
        }
        cout<<i<<" "<<j<<endl;
    }
}
    return 0;
}