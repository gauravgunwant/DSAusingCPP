#include<bits/stdc++.h>
using namespace std;

int RBinarySearch(vector<int> &arr, int low, int high, int target){
    if (low < high) {
        return -1;
    }

    int mid = (low+high)/2;
    if (arr[mid]==target){
        return mid;
    }else if (arr[mid] < target){
        low = mid+1;
        return RBinarySearch(arr, low, high,target );
    } else {
        high = high -1;
        return RBinarySearch(arr, low, high,target);
    }

} 
int RecursiveMethod(vector<int> &arr, int n,int target){
    int low =0;
    int high = n-1;

    int x = RBinarySearch(arr, low, high, target);
    return x;
}
int IterativeMethod(vector<int> &arr,int n,int target){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if (arr[mid] == target){
            return mid;
        } else if (arr[mid] < target){
            low = mid +1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    int target;
    for (int i =0;i <= n-1;i++){
        cin >> arr[i];
    }

    cin >> target;

    // int x = IterativeMethod(arr, n,target);
    int y = IterativeMethod(arr, n,target);

    cout << y ;
    return 0;
}