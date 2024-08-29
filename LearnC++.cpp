#include<bits/stdc++.h>
using namespace std;



// Functions (pass by reference) original value is changed
// arrays are default pass by reference .
int xdd(int arr[] , int n){
    arr[0] += 100;
    cout << arr[0] << endl;

}

int main(){
    int n=5;
    int arr[n];
    for (int i= 0 ; i <=n-1 ; i++){
        cin >> arr[i];
    }

    xdd(arr, n);

    cout << "Arr[0] inside main : " << arr[0] << endl;

}