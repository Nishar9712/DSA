#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int firstAccu(vector<int> arr, int n, int key){
    int start = 0; 
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    
    while(start<=end){
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key) end = mid - 1;
        else start = mid + 1;
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastAccu(vector<int> arr, int n, int key){
    int start = 0; 
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    
    while(start<=end){
        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > key) end = mid - 1;
        else start = mid + 1;
        mid = start + (end - start)/2;
    }
    
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
   vector<int, int> p;
   p.first = firstAccu(arr, n, k);
   p.last = lastAccu(arr, n, k);

   return p;
}
