#include<bits/stdc++.h>
using namespace std;

int SelectionSort(vector<int> &arr, int n){
    for (int i = 0; i <= n-2; i++){
        int mini = i;
        for (int j=i+1; j<= n-1; j++){
            if (arr[j]<arr[mini]){
                mini = j;
            }
        }
        if (mini != i){
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }
    } 
    return 0;
}
int BubbleSort(vector<int> &arr, int n){
    for (int i=n-1;i>=0;i--){
        int Swap = 0;
        for (int j=0 ; j <= i-1;j++ ){
            if (arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                Swap=1;
            }
        }
        if (Swap == 0){
            break;
        }
    }
    return 0;
}
int InsertionSort(vector<int> &arr, int n){
    for (int i= 0;i<=n-1;i++){
        int j=i;
        while (j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    return 0;
}

void Merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while (left <= mid && right <= high){
        if (arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left<=mid){
            temp.push_back(arr[left]);
            left++;
    }
    while (right<=high){
            temp.push_back(arr[right]);
            right++;
    }

    for (int i=low;i<=high; i++){
        arr[i] = temp[i-low];
    }
}
void MergeSort(vector<int> &arr, int low , int high){
    if (low >= high){
        return;
    }
    int mid = (low+high)/2;
    MergeSort(arr,low,mid);
    MergeSort(arr,mid+1,high);
    Merge(arr, low, mid, high);
}

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j= high;
    while (i < j){
        while(arr[i]<=pivot && i <= high-1){
            i++;
        }
        while(arr[j]>pivot && j >= low+1){
            j--;
        }
        if (i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp2= arr[j];
    arr[j] = arr[low];
    arr[low] = temp2;

    return j;
}
void QuickSort(vector<int> &arr, int low ,int high){
    if (low < high){
        int pIndex= partition(arr, low , high);
        QuickSort(arr,low,pIndex-1);
        QuickSort(arr,pIndex+1,high);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i <n;i++){
        cin >> arr[i];
    }

    // SelectionSort(arr,n);
    // BubbleSort(arr,n);
    // InsertionSort(arr,n);
    // MergeSort(arr, low , n-1);
    QuickSort(arr, 0 , n-1);

    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }


    return 0;
}