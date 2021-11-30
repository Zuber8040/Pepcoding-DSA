#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;

int On1 = n;


for(int i=2;i<=n ; i++){
   while(n%i==0){
       n/=i;
       cout<<i<<" ";
   }
}

return 0;
}