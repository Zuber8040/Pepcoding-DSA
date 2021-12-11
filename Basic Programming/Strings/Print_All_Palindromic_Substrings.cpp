#include<iostream>
#include<string.h>
using namespace std;

bool isPalindrome(string s){
    int i=0;
    int j =s.length()-1;
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
    return true;
}

void printallpralindrome(string str)
{
    int n = str.length();
  for(int i=0;i<n;i++){
      for(int j=1;i+j<=n;j++){
          string s = str.substr(i,j);
          if(isPalindrome(s)==true){
              cout<<s<<endl;
          }
      }
  }
}

int main()
{
    string str;
    getline(cin,str);
    printallpralindrome(str);
    return 0;
}