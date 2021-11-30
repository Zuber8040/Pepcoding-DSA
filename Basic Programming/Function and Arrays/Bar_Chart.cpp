#include <iostream>
using namespace std;

void solve(int n,int arr[]){
      int maxe = arr[0];
      for(int i=0;i<n;i++){
          if(arr[i]>maxe){
              maxe=arr[i];
          }
      }
      for(int i=maxe;i>=1;i--){
          for(int j=0;j<n;j++){
              if(arr[j]>=i){    
                cout<<"*\t";
              }else{
                  cout<<"\t";
              }
          }
          cout<<endl;
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