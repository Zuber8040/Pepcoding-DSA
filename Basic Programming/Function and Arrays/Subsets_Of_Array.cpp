#include <iostream>
#include<cmath>
using namespace std;
int decimalTOBinary(int n){
    int ans=0;
    int power=1;
    while(n!=0){
        int r = n%2;
        n/=2;

        ans+=(r*power);
        power*=10;
    }
    return ans;
}


int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int limit = pow(2,n);

for(int i=0;i<limit;i++){
    // convert i to binnary and use 0's and 1's
   int bn =decimalTOBinary(i);
   int  div =pow(10,n-1);
   for(int j=0;j<n;j++){
       int qu = bn/div;
       int r = bn%div;
       if(qu==0){
           cout<<"-\t";
       }else{
           cout<<arr[j]<<"\t";
       }
       bn=r;
       div/=10; 
   }
   cout<<endl;
}


return 0;
}