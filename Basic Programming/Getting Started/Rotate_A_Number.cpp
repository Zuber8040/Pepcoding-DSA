#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int temp = n;
    int nod = 0; // No of Digit 
    while(temp>0){
        temp=temp/10;   
         nod++;
    }
    k = k%nod;
    if(k<0){
        k = k+nod;
    }
    int div =1; //divisor
    int multi =1; //mutiplyer
    for(int i=1;i<=nod;i++){
        if(i<=k){ 
            div = div*10;   //Mutiply    
        }else {
            multi = multi*10;
        }
    }
    int que = n/div;  // queotient 
    int rem = n % div;   //remainder

    int rot = rem * multi + que;
    cout<<rot;


    
}