#include <iostream>
using namespace std;

int maxOfArray(int arr[], int idx, int n){

if(idx==n-1){
    return arr[idx];
}


int maxe = maxOfArray(arr,idx+1,n);
if(maxe>arr[idx]){
    return maxe;
}
else{
    return arr[idx];
}


}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = maxOfArray(arr, 0, n);
    cout << p << endl;
}
