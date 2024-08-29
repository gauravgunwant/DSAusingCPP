#include <bits/stdc++.h>
#include<array>
using namespace std;


int main() {
    array<int, 5> nums = {1, 2, 3, 4, 5}; // Use std::array
    int x = nums.size();
    if (x == 0) {
        return 0;
    } else {
        int first = nums[0]; 
        int last = nums[x-1]; 
        cout << first + last << endl;
    }
    return 0;
}
