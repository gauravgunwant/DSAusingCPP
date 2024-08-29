#include<bits/stdc++.h>
using namespace std;

void PairSTL(){
    pair<int,int> p1= {1,2};
    cout << p1.first << " " << p1.second << endl;

    // another way to make pair. 
    pair<int,char> p2= make_pair(1, 'x'); 
    cout << p2.first << " " << p2.second << endl;
}

int main() {
    PairSTL();
    return 0;
}