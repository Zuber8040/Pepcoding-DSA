#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;
int stars = 1;
int space= n/2;

for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<"\t";
        }
        for (int j = 1; j <=stars; j++)
        {
            if(j==1 || j==stars){
            cout<<"*\t";
            }else{
                cout<<"\t";
            }
        }
       
        if(i<=n/2){
            stars+=2;
            space--;    
        }
        else{
            stars-=2;
            space++;
        }
     cout<<endl;
}


return 0;
}