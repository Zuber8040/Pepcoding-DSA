#include <iostream>
using namespace std;
int main(){
    int r1,c1;
    cin>>r1>>c1;
    int one[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>one[i][j];
        }
    }

    int r2,c2;
    cin>>r2>>c2;
    int two[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>one[i][j];
        }
    }
    if(c1!=r2){
        cout<<"Invalid input";
    }
    int prd[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int sum=0;
            for(int k=0;k<c1;k++){
                sum+=one[i][k]*two[k][j];
            }
            prd[i][j]=sum;
        }
    }

     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
           cout<<prd[i][j]<<" ";
        }
        cout<<endl;
    }










    return 0;
}