#include<iostream>
using namespace std;

int getProduct(int b, int n1, int n2){
    // write your code here
    int rv =0;
    int p=1;
    while(n2>0){
        int d2=n2%10;
        n2=n2/10;
        int sinle_product = getProductASingleDigit(b,n1,d2);
        rv =getSum(b,rv,sinle_product*p);
        p*=10;  
    }

}
int getProductASingleDigit(int b,int n1,int d2){
    int rv =0;
    int c =0;
    int p=1;
    while(n1>0 || c>0){
        int d1=n1%10;
        
        int d = d1*d2 +c;
        d=d%b;
        rv+=(d*p);
        p*=10;
    }
}
int getSum(int b, int n1, int n2) {
   int rv = 0;
   int c = 0 ; //carry
   int p = 1; //power
   while(n1!=0|| n2!=0||c!=0){
        int d1= n1%10; //last digit n1
        int d2 = n2%10; //last digit of n2
        n1/=10;
        n2/=10;
        int d = d1+d2+c;
        c = d/b;
        d=d%b;
        rv+=d*p;
        p*=10;
   }
   return rv;
}




int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    cout<<getProduct(b,n1,n2)<<endl;
}