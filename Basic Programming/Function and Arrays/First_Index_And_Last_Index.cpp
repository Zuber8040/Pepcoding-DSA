#include<iostream>
using namespace std;

int lastIndex(int n,int arr[],int data){
    
}

int firstIndex(int n,int arr[],int data){
     
    int fi =-1;
    int li = -1;
    
    int left= 0;
    int right =n-1;
    
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]==data){
            fi=mid;
            right =mid-1;   
        }else if(arr[mid]<data){
            left =mid+1;
        }else{
            right=mid-1;
        }
    }

}


int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    
    // write your code here
    
    int fi =-1;
    int li = -1;
    
    int left= 0;
    int right =n-1;
    
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]==data){
            fi=mid;
            right =mid-1;   
        }else if(arr[mid]<data){
            left =mid+1;
        }else{
            right=mid-1;
        }
    }

    left=0;
    right=n-1;
    
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]==data){
            li=mid;
            left=mid+1;
        }else if(arr[mid]<data){
            left =mid+1;
        }else{
            right=mid-1;
        }
    } 
    cout<<fi<<endl<<li<<endl;
}