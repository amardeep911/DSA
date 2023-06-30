#include <iostream>
#include <math.h>
using namespace std;


int isSorted(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]> arr[1]){
        return false;
    }
    else {
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }

}

int main(){
    int arr[] ={1};
    int size = 1;

    int ans = isSorted(arr, size);
    if(ans){
        cout<<"array is sorted ";
    }
    else{
        cout<<"array is not sorted";
    }

}