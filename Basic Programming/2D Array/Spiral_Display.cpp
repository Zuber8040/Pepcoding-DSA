#include <iostream>
using namespace std;

const int mr = 100, mc = 100;
void inputBound(int (&mat)[mr][mc], int n, int m)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> mat[i][j];
    }
  }
}

int main(int argc, char** argv)
{


  int mat[mr][mc] = {0};
  int n, m;
  cin >> n >> m;

  inputBound(mat, n, m);

  int minr =0;
  int minc =0;
  int maxr = n -1;
  int maxc = m -1;
  int tne = n * m;
  int count =0;
 
  
  while(count < tne){
    // left wall
    for(int i = minr , j = minc ; i <= maxr && count < tne; i++){
        cout << mat[i][j] <<endl;
        count++;
    }
    minc++;
    
    
    // bottom wall 
    for(int i = maxr , j = minc ; j <= maxc && count < tne; j++){
        cout << mat[i][j] <<endl;
        count++;
    }
    maxr--;
    
    // right wall
    for(int i = maxr , j = maxc ; i >= minr && count < tne ; i--){
        cout << mat[i][j] <<endl;
        count++;
    }
    maxc--;
    
    // top wall
    for(int i = minr , j = maxc ; j >= minc && count < tne ; j--){
        cout << mat[i][j] <<endl;
        count++;
    }
    minr++;
    
  }
  
  return 0;
}