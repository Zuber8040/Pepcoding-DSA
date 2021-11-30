#include<iostream>
using namespace std;
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
int main(){
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = DecToAny(n,b);
    cout << res << endl;
}