#include <bits/stdc++.h>
using namespace std;

int ZeroOne(vector<int> &arr, int x) {
    vector<int> Zarr(x);
    vector<int> Oarr(x);
    vector<int> Narr(x);
    int Zcount=0;
    int Ocount = 0;
    int Ncount=0;

    for (int i =0; i<x; i++) {
        if (arr[i]==0) {
            Zarr[Zcount] = arr[i];
            Zcount++;
        } else if (arr[i] == 1) {
            Oarr[Ocount] = arr[i];
            Ocount++;
        } else {
            Narr[Ncount] = arr[i];
            Ncount++;
        }
    }

    sort(Narr.begin(), Narr.begin() + Ncount);

    vector<int> Finalarr(Zcount + Ncount + Ocount);
    int xF = 0;
    int xZarr=0;
    int xOarr=0;
    int xNarr=0;

    while (xZarr < Zcount) {
        Finalarr[xF] = Zarr[xZarr];
        xF++;
        xZarr++;
    }
    while (xNarr < Ncount) {
        Finalarr[xF] = Narr[xNarr];
        xF++;
        xNarr++;
    }
    while (xOarr < Ocount) {
        Finalarr[xF] = Oarr[xOarr];
        xF++;
        xOarr++;
    }

    for (int i = 0; i < Finalarr.size(); i++) {
        cout << Finalarr[i] << " ";
    }
    cout << endl;

    return 0;
}

int main() {
    vector<int> arr = {7,0,9,8,1,0,0,-3,9,1,1};
    int x = arr.size();

    ZeroOne(arr, x);

    return 0;
}