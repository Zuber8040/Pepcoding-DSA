#include <iostream>
using namespace std;
int element(int n,int* arr,int find){
    
    for(int i=0;i<n;i++){
        if(arr[i]==find){
            return i;
        }
    }
    return -1;
}
int main(){

int n,find;
cin>>n;
int *arr = new int[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cin>>find;
cout<<element(n,arr,find);
return 0;
}