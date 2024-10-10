#include<bits/stdc++.h>
using namespace std;
void TailRecursion(int x){
    if ( x == 4){  // base condition!
        return;
    }
    cout << "Bhavesh" << endl; 
    x++;
    TailRecursion(x);
}

void HeadRecursion(int x){
    if ( x == 4){  // base condition!
        return;
    }
    x++;
    HeadRecursion(x);
    cout << "Bhavesh" << endl; 
}
int main(){
    // in tail recursion , we first do our job and then call the function at the end.!
    TailRecursion(0); // x = 0
    
    // in head recursion , we first call function and then do our job that means while coming back we do the work or the given codes will be executed only when returning.!
    HeadRecursion(0); // x = 0
    return 0;
}