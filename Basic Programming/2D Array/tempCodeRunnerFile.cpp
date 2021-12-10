#include <iostream>
#include <vector>

using namespace std;






int main() 
{
    int n, target;
    cin>>n;
    vector<vector<int>> mat(n, vector<int> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin>>mat[i][j];
    }
    cin>>target;
    int i=0;
    int j=matrix[0].size();
    while(i<matrix.size() && j>=0){
        if(target==matrix[i][j]){
            cout<<i<<endl<<j;
            // return;
        }
        else if(target<matrix[i][j]){
            j--;
        }
        else{
            i++;
    }
    cout<<"Not Found";

}