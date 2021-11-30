#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;

int space =1;
int stars =n/2+1;

for(int i=1;i<=n;i++){
    for(int j=1;j<=stars;j++){
        cout<<"*\t";
    }
    for(int j=1;j<=space;j++){
        cout<<"\t";
    }
    for(int j=1;j<=stars;j++){
        cout<<"*\t";
    }
    cout<<endl;
    if(i<=n/2){
        stars--;
        space+=2;
    }
    else{
        stars++;
        space-=2;
    }
}

return 0;
}