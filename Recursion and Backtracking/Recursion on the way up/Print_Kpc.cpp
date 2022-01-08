#include <iostream>
#include<string>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf){
    if(ques.length()==0){
        cout<<asf<<"\n";
        return ;
    }
   char ch = ques[0];
   string roq = ques.substr(1); //rest of questions
  int idx = ch-'0';

for(int i=0;i<codes[idx].size();i++){
        char ch2 = codes[idx].at(i);       
        printKPC(roq,asf+ch2);
    }

    
}

int main(){
    string str;
    cin >> str;
    printKPC(str, "");
}