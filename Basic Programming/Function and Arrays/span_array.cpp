#include <iostream>
using namespace std;

int span(int n,int arr[]){
    int maxe = arr[0];
    int mine = arr[0];
    for(int i=0;i<n;i++){   
        if(arr[i]>maxe){
            maxe=arr[i];
        }
        else if(arr[i]<mine){
            mine=arr[i];
        }
    }
    int ans =0;
    ans = maxe-mine;
    return ans;
}


int main(){


int n;
cin>>n;
int arr[n];
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
cout<<span(n,arr);


return 0;
}