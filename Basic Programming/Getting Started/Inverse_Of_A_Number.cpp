#include <iostream>
#include<cmath>
using namespace std;
int main(){


int n;
cin>>n;
int i=0;
int inv =0;
int op =1; //original position   
while(n!=0){
    int od = n%10; // original digits
    int id = op;  //inverse digit
    int ip = od;   // inverse postion 

    // make change to inv using ip and id

    inv += + id*pow(10,ip-1);
    n=n/10;
    op++;
}
cout<<inv;
return 0;
}