#include<bits/stdc++.h>
using namespace std;

void PrintNumbers(int i, int n){
    // using tail recursion, we need to use extra variable i.!
    if (i > n){
        return;
    }
    
    cout << i << endl;
    PrintNumbers(i+1,n);

}
void OptimizedPN(int n) {
    // using head recursion, we dont need to use extra variable for printing numbers 1 to n.
    if (n==0){
        return;
    }

    OptimizedPN(n-1);
    cout << n << endl;
}

int main(){
    // to print numbers from 1, to n..
    int n;
    cin >> n;
    PrintNumbers(1,n);

    OptimizedPN(n);
}