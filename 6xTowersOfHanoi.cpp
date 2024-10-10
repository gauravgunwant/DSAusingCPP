#include<bits/stdc++.h>
using namespace std;

void TOH(int n, char source, char dest, char aux){
    if (n == 1){
        cout << "shift disk 1 from " << source << " to " << dest << endl;
        return;
    }

    TOH(n-1, source, aux, dest);
    cout << "shift disk " << n << " from " << source << " to " << dest << endl;

    TOH(n-1, aux, dest, source);
}

int main(){
    int n;
    cin >> n;
    TOH(n, 'A', 'C', 'B');
}