#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s){
    // write your code here
        if(s==""){
        vector<string>res;
        res.push_back("");
        return res;
    }
    char ch = s[0];
    
    string ros = s.substr(1);  //bc
    
    vector<string>ans= gss(ros);
    
    vector<string>myans;
    
    for(string str :ans){
        myans.push_back(str);
    }
    
    for(string str:ans){
        myans.push_back(ch+str);
    }

return myans;


}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << "[";
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << "]";
}