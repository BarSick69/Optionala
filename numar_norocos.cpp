// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

bool isNotLucky(int n);
int howManyLucky(int a,int b);
int main() {
    int a = 1;
    int b = 15;
    // Write C++ code here
    cout<<howManyLucky(a,b);

    return 0;
}

bool isNotLucky(int n){
    while (n!=1){
        if(n%2!=0){
            return false;
        }
        n/=2;
    }
    return true;
}

int howManyLucky(int a,int b){
    int num=0;
    for(int i=a;i<=b;i++){
        if(!isNotLucky(pow(i,2))){
            num+=1;
        }
    }
    return num;
}
