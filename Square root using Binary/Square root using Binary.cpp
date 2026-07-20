#include <iostream>
using namespace std;


long long int binarySqrt(int n){
    int num = n;
    int s = 0;
    int e = n;
    
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    
    while(s<=e){
        long long square = mid * mid;
        
        if(square == num) return mid;
        else if(square > num) e = mid -1;
        else {
            s = mid+1;
            ans = mid;
        }
        
        mid = s + (e-s)/2;
    }
    return ans;
}

double Precision(int n, double tempNum, int pre){
    double fraction = 1;
    double ans = tempNum;
    
    for(int i = 0; i<pre; i++){
        fraction = fraction / 10;
        
        for(double j = ans; j*j<=n; j+=fraction){
            ans = j;
        }
    }
    
    return ans;
}

int main() {
    
    int n = 2;

    double temp = binarySqrt(n);
    
    cout<<Precision(n, temp, 8);
    
    return 0;
}