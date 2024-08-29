#include<bits/stdc++.h>
using namespace std;

void passValueAndReference(int &num1) {
    num1 = num1+ 5;
}
int main(){
    int num1;
    cin >> num1 ;
    passValueAndReference(num1);
    cout << num1 ;
    /*
    passing array dont need & , u can use * if not using
    arr[] , like *arr on the function
    if using arr[] then it will be psased by memory without
    specifying to chnge the memory value.
    */
    return 0;
}