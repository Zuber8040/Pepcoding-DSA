#include<bits/stdc++.h>
using namespace std;

void curiousCase(int n,int arr[]){
    // 	write your code here
    /*
    If A = [3, 7, -1, 2, 4, 9]
    2nd max is 7
    2nd min is 2
    */

//    TC:O(NLOGN) SC:O(1)
//    sort(arr,arr+n);
//    cout<<arr[n-2]<<" "<<arr[1];

/*
    Approach: The approach is to traverse the array twice. 

    In the first traversal find the maximum element. 

    In the second traversal find the greatest element in the remaining excluding the previous greatest.
*/
int maxe =  arr[0];
int mine = arr[0];
int second_max = arr[0];
int second_min = arr[0];
for(int i=1;i<n;i++){
    if(arr[i]>maxe){
        second_max = maxe;
        max = arr[i];
    }
    else if(arr[i]>second_max){
        second_max=arr[i];
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
	curiousCase(n,arr);
	return 0;
}