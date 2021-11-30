#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;

int sp = n-1; //space;
int st = 1;  //start 

for(int i=1;i<=n;i++){
    for(int j=1;j<=sp;j++){
        cout<<"\t";
    }
    for (int j =1 ; j<=st; j++)
    {
        cout<<"*\t";
    }
    cout<<endl;
    sp--;
    st++;
    
}

return 0;
}