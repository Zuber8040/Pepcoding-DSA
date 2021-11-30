#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  //write your code here
  int count=0;
  int modulo = 0;
    while(n!=0){
        modulo = n%10;
        if(modulo==d){
            count++;
            modulo =0;
        }
        else{
            modulo=0;
        }
        n/=10;
    }

return count;
}
int main() {
  int n, d; 
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}