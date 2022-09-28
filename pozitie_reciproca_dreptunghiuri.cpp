// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int se_afla_in_interior(int x1,int y1,int lat1,int inalt1,int x2,int y2,int lat2,int inalt2);
int main() {
    cout<<"Dati x1: ";
    int x1;
    cin>>x1;
    cout<<endl;
    
    cout<<"Dati y1: ";
    int y1;
    cin>>y1;
    cout<<endl;
    //50, 50, 100, 50, 30, 40, 100, 130
    cout<<"Dati l1: ";
    int l1;
    cin>>l1;
    cout<<endl;
    
    cout<<"Dati i1: ";
    int i1;
    cin>>i1;
    cout<<endl;
    
    cout<<"Dati x2: ";
    int x2;
    cin>>x2;
    cout<<endl;
    
    cout<<"Dati y2: ";
    int y2;
    cin>>y2;
    cout<<endl;
    
    cout<<"Dati l2: ";
    int l2;
    cin>>l2;
    cout<<endl;
    
    cout<<"Dati i2: ";
    int i2;
    cin>>i2;
    cout<<endl;
    
    
    cout<<se_afla_in_interior(x1,y1,l1,i1,x2,y2,l2,i2);
    return 0;
}
int se_afla_in_interior(int x1,int y1,int lat1,int inalt1,int x2,int y2,int lat2,int inalt2){
    if(x1>x2&&((x1+lat1)<(x2+lat2))&&y1>y2&&((y1+inalt1)<(y2+inalt2))||x2>x1&&((x2+lat2)<(x1+lat1))&&y2>y1&&((y2+inalt2)<(y1+inalt1))){
        return 0;
    }
    else if(x1==x2&&lat1==lat2&&inalt1==inalt2&&y1==y2){
        return 1;
    }
    else if(((x1>x2&&x1<(x2+lat2))&&(y1>y2&&y1<(y2+inalt2)))||((x2>x1&&x2<(x1+lat1))&&(y2>y1&&y2<(y1+inalt1)))){
        return 3;
    }
    else if((((x1+lat1)>x2&&(x1+lat1)<(x2+lat2))&&(y1>y2&&y1<(y2+inalt2)))||(((x2+lat2)>x1&&(x2+lat2)<(x1+lat1))&&(y2>y1&&y2<(y1+inalt1)))){
        return 3;
    }
    else if(((x1>x2&&x1<(x2+lat2))&&((y1+inalt1)>y2&&(y1+inalt1)<(y2+inalt2)))||((x2>x1&&x2<(x1+lat1))&&((y2+inalt2)>y1&&(y2+inalt2)<(y1+inalt1)))){
        return 3;
    }
    else if(((((x1+lat1)>x2)&&((x1+lat1)<(x2+lat2)))&&(((y1+inalt1)>y2)&&((y1+inalt1)<y2+inalt2)))||((((x2+lat2)>x1)&&((x2+lat2)<(x1+lat1)))&&(((y2+inalt2)>y1)&&((y2+inalt2)<y1+inalt1)))){
        return 3;
    }
    return 2;
    
}
