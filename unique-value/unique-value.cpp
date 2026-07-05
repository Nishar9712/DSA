#include <iostream>
using namespace std;

int unique(int array[], int size){

    for(int i=0; i<size; i++){
        int count = 1;

        for(int j=0; j<size; j++){
            if (array[i] == array[j] && i != j){
                count+=1;
                break;
            }
        }
        
        if (count == 1) 
            return  array[i];
    }
    
    return 0;
}

int main() {
    
    int array[10] = {1, 3, 1, 6, 3, 6, 4, 4, 0};
    int size = 10;

    int ans;
    for(int i = 0; i<size; i++){
        ans = ans ^ array[i];
    }

    cout<<"Unique value: "<<ans;
    cout<<"Unique value: "<<unique(array, 9);
    
}