#include <iostream>
using namespace std;



void solve(int n1,int n2,int a1[],int a2[]){

    int m = max(n1,n2);
    int ans[m];

    int i = n1-1;
    int j= n2-1;
    int carry =0;
    // int sum =0;
    int k = m-1;
    while(k>=0) {
        int sum =carry;
        if(i>=0){
        sum+=a1[i];
        }
        if(j>=0){
            sum+=a2[j];
        }
        int queo = sum/10;
        
        int reaminder = sum%10;
        
        ans[k]=reaminder;
        
        carry=queo;
        
        i--;
        
        j--;
        
        k--;
    }
    if(carry!=0){
        cout<<carry<<endl;
    }
    for(int i=0;i<m;i++){
        cout<<ans[i]<<endl;
    }
}


int main(){

int n1,n2;
cin>>n1;
int arr1[n1];

for(int i=0;i<n1;i++){
    cin>>arr1[i];
}
cin>>n2;

int arr2[n2];

for(int i=0;i<n2;i++){
    cin>>arr2[i];
}


solve(n1,n2,arr1,arr2);


return 0;

}