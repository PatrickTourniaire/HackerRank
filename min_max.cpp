#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr(5);
    vector<int> nums;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    
    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i];
        arr.erase(arr.begin()+i);
        
        nums.push_back(std::accumulate(arr.begin(), arr.end(), 0));
        arr.insert(arr.begin()+i, num);
    }
    cout << *std::min_element(nums.begin(), nums.end()) << ' ' << *std::max_element(nums.begin(), nums.end());
    return 0;
}