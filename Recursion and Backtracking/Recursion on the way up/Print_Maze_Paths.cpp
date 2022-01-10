#include <iostream>
#include<vector>
#include<string>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf){
    // write your code here
    /* 

     if(sr == dr && sc == dc){
        vector<string> base;
        base.push_back("");
        return base;
    }
    
    vector<string> myAns;
    if(sc + 1 <= dc){
        vector<string> Horizontal = getMazePaths(sr,sc+1,dr,dc);
        for(string s : Horizontal){
            myAns.push_back("h" + s);
        }
    }
    
    if(sr + 1 <= dr){
        vector<string> Vertical = getMazePaths(sr + 1,sc,dr,dc);
        for(string s : Vertical){
            myAns.push_back("v" + s);
        }
    }
    
    return myAns;

    */
   if(sr==dc && sc==dc){
       cout<<psf<<"\n";
       return;
   }
   if(sc+1<=dc){
      printMazePaths(sr,sc+1,dr,dc,psf+"h");
   }

   if(sr+1<=dr){
       printMazePaths(sr+1,sc,dr,dc,psf+"v");
   }
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    printMazePaths(0, 0, n - 1, m - 1, "");
}