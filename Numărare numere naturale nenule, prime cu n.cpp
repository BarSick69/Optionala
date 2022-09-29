// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool este_cmmdc(int n,int x);
int count_prim_n(int n);
int main() {
  cout<<count_prim_n(12);
}
int count_prim_n(int n){
    int numarul_de_primi=0;
    for(int i=1;i<n;i++){
        if(este_cmmdc(n,i)){
            numarul_de_primi+=1;
        }
    }
    return numarul_de_primi;
}



bool este_cmmdc(int n,int x){
    int divizorul;
    for(int i=1;i<=x;i++){
        if(x%i==0&&n%i==0){
               divizorul=i;
        }
        
    }
    if(divizorul!=1){
        return false;
    }
    return true;
}
