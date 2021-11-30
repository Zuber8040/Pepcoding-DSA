#include <iostream>
using namespace std;
int main(){
    
int n;
cin>>n;

int stars =1;
int space = n/2;
for(int i=1;i<=n;i++){
    for(int j=1;j<=space;j++){
        if(i==n/2+1){
        cout<<"*\t";
        }else{
            cout<<"\t";
        }
    }
    for(int j=1;j<=stars;j++){
        cout<<"*\t";
    }
    if(i<=n/2){
        stars++;
        
    }else{
        stars--;
    }
    cout<<endl;   
}


return 0;
}