#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip> 
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    std::vector<int> neg;
    std::vector<int> pos;
    std::vector<int> zero;
    
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       
       if (arr[arr_i] > 0) {
           pos.push_back(arr[arr_i]);
       } else if (arr[arr_i] < 0) {
           neg.push_back(arr[arr_i]);
       } else {
           zero.push_back(arr[arr_i]);
       }
       
    }
    
    float pos_factor =  (float) pos.size() / (float) arr.size();
    float neg_factor = (float) neg.size() / (float) arr.size();
    float zero_factor = (float) zero.size() / (float) arr.size();
    
    cout << std::setprecision(4) << pos_factor << '\n';
    cout << std::setprecision(4) << neg_factor << '\n';
    cout << std::setprecision(4) << zero_factor << '\n';
    
    
    return 0;
}