#include<iostream>
using namespace std;    

int AnyToDec(int n,int b){
//write your code here.
    int power=1;
    int ans = 0;
   while(n!=0){
       int rem = n%10;
       n/=10;

       ans+=rem*power;
       power*=b;
   }
   return ans;

}
int main(){
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = AnyToDec(n,b);
    cout<<res<<endl;
}