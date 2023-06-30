#include <iostream>
#include <math.h>
using namespace std;

bool binarySearch(int arr[], int s,int e, int key){

    if(s>e){
        return false;
    }
   int  mid = s + (e-s)/2;

   if(arr[mid] == key){
    return true;
   }
  if(key>arr[mid]){
    return binarySearch(arr,mid+1, e, key );
   }
   else if(key<arr[mid]){
    return binarySearch(arr,s, mid-1, key);
   }

}


int main(){
    int arr[6]= {1,2,3,4,5,3};
    int size = 5;
    int key = 9;
    cout<<"found or not"<<binarySearch(arr, 0,4,key)<<" "<<endl;

}