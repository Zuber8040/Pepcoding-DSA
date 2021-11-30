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
int DecToAny(int n, int b){
//write your code here
    int power = 1;
    int ans  =0;
    while(n!=0){
        int rem  = n%b;  //it will strore the remainder
        n/=b;
        ans+=(rem*power); //it will store as ans = ans +(remainder *power)
        power*=10;
    }
    return ans;
}

int main() {
  int n;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
  int decno = AnyToDec(n,b1);  //it will return decimal number
  int ans = DecToAny(decno,b2); //it wll convert decimal to any base
  cout <<ans<< endl;
}