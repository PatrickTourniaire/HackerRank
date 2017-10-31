#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    int digit;
    int r;
    int spaces;
    int hashes;
    
      for (r = 0; r < n; r++) {
          int padding = n - r;
          int hashes_total = n - padding;
          for (spaces = 0; spaces < padding-1; spaces++) {
              cout << ' ';
          } for (hashes = 0; hashes < hashes_total+1; hashes++) {
              cout << '#';
          }
          
          cout << endl;
      }
    
    return 0;
}
