#include <iostream>
using namespace std;
int main(){

int n1,n2;
cin>>n1>>n2;
// input to numbers 

// first we will calculate GCD of two numbers

int On1 = n1,On2 = n2; //Orginal Number 



while(n1%n2!=0){  //we will divide the num1 by num2 till we get the GCD 
    int rem = n1%n2 ; // it will store my remainder 
    // n1 = n2, n2 = remainder;
    n1 = n2;
    n2 = rem;
}
int gcd = n2;
//  our gcd is now calcalted 
int lcm = (On1 * On2)/gcd;

cout<<gcd<<"\n"<<lcm;




return 0;
}