#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;


int stars =1;
int space = n/2;

int oval =1;  //common variable

for(int i=1;i<=n;i++){
    int ival = oval;  //outer vaialbe ki value inner variable mein store kr diya hu
    for(int j=1;j<=space;j++){
        cout<<"\t";
    }
    for(int j=1;j<=stars;j++){
        cout<<ival<<"\t";
        if(j<=stars/2){
            ival++;
        }
        else{
            ival--;
        }
    }
    cout<<endl;
    if(i<=n/2){
        space--;
        stars+=2;
        oval++;
    }
    else{
        space++;
        stars-=2;
        oval--;
    }   
}


return 0;
}