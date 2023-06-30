#include <iostream>
#include <math.h>
using namespace std;

int search(int arr[], int size, int key){
    if(size ==0){
        return false;
    }

    if(arr[0]== key){
        return true;
    }
   bool remainingPart = search(arr+1, size-1,key );
   return remainingPart;

};

int main(){
    int arr[]= {3,5,1,2,6};
    int size = 5;
    int key = 3;
    int ans = search(arr, size, key);
    if(ans){
        cout<<"found it "<<endl;
    }
    else{
        cout<<"not found it"<<endl;
    }
    
}