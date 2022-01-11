#include<iostream>
#include<vector>

using namespace std;

void floodfill(int[][] maze) {
    
}

int main() {
    int n, m;
    cin >> n >> m;
    vector < vector < int >> arr(n, vector < int > (m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    floodfill(arr);
}