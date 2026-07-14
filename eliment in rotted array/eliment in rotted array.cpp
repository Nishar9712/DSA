#include <iostream>
using namespace std;

int Pivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int m = s + (e-s)/2;
    
    while(s<e){
        if(arr[m]> arr[0]) s = m + 1;
        else e = m;
        m = s + (e-s)/2;
    }
    return m;
}

int binarySearch(int arr[], int start, int end, int k){
    int s = start;
    int e = end;
    int m = s+(e-s)/2;
    
    while(s<=e){
        if(arr[m] == k) return m;
        else if(arr[m] > k) e = m-1;
        else s = m+1;
        m = s+(e-s)/2;
    }
    return -1;
}

int main() {
    int arr[] = {3, 7, 8, 1, 2, 3};
    
    int end = 5;
    int k = 2;
    int index;
    
    int pivot = Pivot(arr, 6);
    
    if(k>=arr[pivot] & k<=arr[end]) index = binarySearch(arr, pivot, end, k);
    
    else index = binarySearch(arr, 0, pivot-1, k);
    
    cout<<index;

    return 0;
}