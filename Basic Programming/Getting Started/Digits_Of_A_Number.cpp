#include <iostream>
using namespace std;
void solve(int n){
  int r=0;
  if(n==0)
  return ;
    r = n%10;
    cout<<r<<endl;
}
int main(){

int n;
cin>>n;
solve(n);


return 0;
}