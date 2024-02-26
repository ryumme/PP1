#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n][n];
  int maxi = 0;
  int sec = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(a[i][j] > maxi){
        maxi = a[i][j];
      }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
    
    if(a[i][j] > sec && a[i][j] < maxi){
          sec = a[i][j];
          if(maxi == sec){
            return 0;
          }
      }
    }
      }
    }
  }
    cout << sec << endl;
  }