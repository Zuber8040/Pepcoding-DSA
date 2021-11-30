#include <iostream>  
using namespace std;  
int main()  
{  
int t;
cin>>t;
 
 
 while (t--)
 {
     /* code */
      int n, i, m=0, flag=0;  
//   cout << "Enter the Number to check Prime: "; 
  cin >> n;  
  m=n/2;  
       for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"not prime"<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "prime"<<endl;  
     
 }
 
  return 0;  
}  