#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string>keypad={
    ".;",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tu",
    "vwx",
    "yz"
};


vector<string> getKPC(string s){


    if(s.size()==0){
        vector<string>basecase;
        basecase.push_back("");
        return basecase;
    }

    char ch = s[0];
    string ros = s.substr(1);
    vector<string>res = getKPC(ros);
    vector<string>myres;
    int idx = ch-'0';
    for(int i=0;i<keypad[idx].size();i++){
        char ch2 = keypad[idx].at(i);       
        for(string str :res){
            myres.push_back(ch2+str);
        }
    }
    return myres;
}


int main(){
    string s;
    cin >> s;
    vector<string> ans = getKPC(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}