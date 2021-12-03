#include <iostream>
using namespace std;
void solve(int n,int arr[]){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<"\t";
            }
            cout<<endl;
        }
    }
}
int main(){


int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
solve(n,arr);


    return 0;
}