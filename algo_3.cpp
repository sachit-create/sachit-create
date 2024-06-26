#include<iostream>
#include "algo_func.h"
using namespace std;
// Bibble sort alo  based program.-acending order -time complexity = O(n^2)

int main(){
    int n;
    int arr[n];
    cout << "enter size of array";
    cin >> n;

    for(int i=0 ; i<n ; i++){
        cout << "enter element no" << i+1 << ":";
        cin >> arr[i];
    }

    for(int i = 0 ; i<n-1 ; i++){
        for(int j = 0 ; j<n-1-i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr,i,j+1);
            }
        }
    }

    for(int i = 0 ; i<n ; i++){
       cout << "element no " << i+1 << " is: "<< arr[i] << endl;
    }
    return 0;
}