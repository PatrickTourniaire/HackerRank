#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;


int main(){
    int n;
    cin >> n;
    
    std::vector <int> primary_diagonal;
    std::vector <int> secondary_diagonal;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
           
          if (a_i == a_j) {
              primary_diagonal.push_back(a[a_i][a_j]);
          }
       }
    }
    
    std::reverse(a.begin(), a.end());
    
    for (int a_i = 0; a_i < n; a_i++) {
        for (int a_j = 0; a_j < n; a_j++) {
            cin >> a[a_i][a_j];
            if (a_i == a_j) {
                secondary_diagonal.push_back(a[a_i][a_j]);
            }
        } 
    }
    
    int prim_sum = std::accumulate(primary_diagonal.begin(), primary_diagonal.end(), 0);
    int sec_sum = std::accumulate(secondary_diagonal.begin(), secondary_diagonal.end(), 0);
    
    int abs_sum = abs(sec_sum - prim_sum);
    cout << abs_sum;
    return 0;
}