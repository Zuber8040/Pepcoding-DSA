#include <iostream>
using namespace std;
void solve(int n,int arr[],int data){
    int big =arr[0];
    int small = arr[0];
    for(int i=0;i<n;i++){
        if(data>=big){
            big = arr[i];
            small=arr[i-1];
        }
    }
    cout<<big<<"\n"<<small<<endl;
}


int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int data;
cin>>data;

solve(n,arr,data);

return 0;
}