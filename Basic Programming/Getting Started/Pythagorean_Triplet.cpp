#include <iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;


int height = a*a;
int base  = b*b;
int po = c*c;
if(height+base == po){
    cout<<"true";
}
else if(po + base == height){
    cout<<"true";
}
else if(po  + height == base){
    cout<<"true";
}
else{
    cout<<"false";
}



return 0;
}