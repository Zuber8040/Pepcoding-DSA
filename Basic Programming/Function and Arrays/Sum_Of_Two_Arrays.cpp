#include<iostream>
using namespace std;


void solve(int n1,int *a1,int n2,int *a2){

    
    int n = n1+n2;
    int arr[n];
    for(int i=0;i<n1;i++){
        for(int j=0;j<=n2;j++){

        }
    }
}

int main(){
    int n1, n2;
    cin>>n1;
    int* a1 = new int[n1];
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    int* a2 = new int[n2];
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }
    solve(n1,a1,n2,a2);
    //write your code here
    
}