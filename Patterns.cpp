#include<bits/stdc++.h>
using namespace std;

void Pattern1( int n){
    for (int i =0; i<n ; i++){
        for (int j=0 ; j<n ; j++) {
            cout << "*" ;
        }
        cout << endl ;
    }
}
void Pattern2( int n){
    for (int i =0; i<n ; i++){
        for (int j=0 ; j<=i ; j++) {
            cout << "*" ;
        }
        cout << endl ;
    }
}
void Pattern3( int n){
    for (int i =1; i<=n ; i++){
        for (int j=1 ; j<=i ; j++) {
            cout << j ;
        }
        cout << endl ;
    }
}
void Pattern4( int n){
    for (int i =1; i<=n ; i++){
        for (int j=1 ; j<=i ; j++) {
            cout << i << " " ;
        }
        cout << endl ;
    }
}
void Pattern5( int n){
    for (int i = n; i>0 ; i--){
        for (int j=1 ; j<=i ; j++) {
            cout << "*" ;
        }
        cout << endl ;
    }
}
void Pattern6( int n){
    for (int i = n; i>0 ; i--){
        for (int j=1 ; j<=i ; j++) {
            cout << j << " " ;
        }
        cout << endl ;
    }
}
void Pattern7( int n){
    for (int i=1 ; i<= n ; i++){
        for (int j =1 ; j<=n-i ; j++){
            cout << " ";
        }       
        for (int k=1; k<= i+ (i-1); k++){
            cout << "*";
        }
        cout << endl;
    }
}
void Pattern8( int n){

    for (int i=n ; i> 0 ; i--){
        for (int j = 0 ; j<n-i ; j++){
            cout << " ";
        }
        
        for (int k=1; k<= i+ (i-1); k++){
            cout << "*";
        }
        cout << endl;
    }
}
void Pattern9( int n){
        for (int i=1 ; i<= n ; i++){
        for (int j =1 ; j<=n-i ; j++){
            cout << " ";
        }       
        for (int k=1; k<= i+ (i-1); k++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i=n ; i> 0 ; i--){
        for (int j = 0 ; j<n-i ; j++){
            cout << " ";
        }
        
        for (int k=1; k<= i+ (i-1); k++){
            cout << "*";
        }
        cout << endl;
    }
}
void Pattern10( int n){
        for (int i = 1 ; i<=n; i++){
            for (int j=1 ; j <=i ; j++) {
                cout << "* ";
            }
            cout << endl ;
        }
        for (int i =1; i<n ; i++){
            for (int j=0;j<n-i;j++) {
                cout << "* ";
            }
            cout << endl;
        }
        // for (int i= 1;i <=2*n-1;i++){
        //     int stars = i;
        //     if (i>n) {
        //         stars = 2*n-i;
        //     }
        //     for (int j =1; j<=stars;j++){
        //         cout << "*";
        //     }
        //     cout << endl;
        // }
}
void Pattern11(int n) {
    int start =1 ;
    for (int i = 0; i<=n ; i++){
        if (i % 2 ==0 ) {
            start = 1 ;
        } else {
            start =0 ; 
        }
        for (int j=0; j<=i ; j++){
            cout << start;
            start = 1- start;
        }
        cout << endl;
    }

}
void Pattern12(int n) {
    int x= 2 * (n-1);
    for (int i = 1; i<=n; i++ ){
        for (int j = 1; j<=i; j++){
            cout << j ;
        }
        for ( int j =1 ; j <= x; j++) {
            cout << " ";
        }
        for (int j = i; j>=1 ; j--){
            cout << j;
        }
        cout << endl;
        x -= 2;
    }
}


int main() {
    int t ;
    cin >> t;
    for (int i =0;i<t;i++) {
        int n;
        cin >> n;
        Pattern12(n);
    }
}