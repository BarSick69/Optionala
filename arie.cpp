// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
float lungimea(double x1,double x2,double y1,double y2){
    float lungime;
    lungime = sqrt(abs(pow(x1-x2,2))+abs(pow(y1-y2,2)));
    return lungime;
}

float area(float ab,float ac,float cb){
    float smip = (ab+ac+cb)/2;
    float Ar = sqrt(smip*(smip-ab)*(smip-ac)*(smip-cb));
    return Ar;
}
int main() {
     double a_x = 1;
     double a_y = 1;
     double b_x = 5;
     double b_y = 2;
     double c_x = 3;
     double c_y = 4;
     float  p_x = 6;
     float  p_y = 4;
     float AB = lungimea(a_x,b_x,a_y,b_y);
     float AC = lungimea(a_x,c_x,a_y,c_y);
     float CB = lungimea(c_x,b_x,c_y,b_y);
     
     float aria_la_triunghi_initial = area(AB,AC,CB);
     cout<<aria_la_triunghi_initial<<"\n";
     float AP=lungimea(a_x,p_x,a_y,p_y);
     float CP=lungimea(c_x,p_x,c_y,p_y);
     float PB=lungimea(b_x,p_x,b_y,p_y);
     
     float aria_APC=area(AC,AP,CP);
     float aria_APB=area(AP,AB,PB);
     float aria_CPB=area(CP,PB,CB);
     float suma_ariilor=aria_APC+aria_APB+aria_CPB;
     cout<<aria_APC+aria_APB+aria_CPB;
     
     if(suma_ariilor-aria_la_triunghi_initial<=0.1f){
         cout<<"Punctul este inauntrul triunghiului";
         return 0;
     }
     else{
         cout<<"Punctul este in afara triunghiului";
         return 0;
     }

     
     
}
