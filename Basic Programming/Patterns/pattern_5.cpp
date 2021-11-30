#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int space =n/2;
    int stars = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<"\t";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*\t";
        }
        cout<<endl;
        if(i<=n/2){
            space--;
            stars+=2;
        }else{
            space++;
            stars-=2;
        }
    }

return 0;
}