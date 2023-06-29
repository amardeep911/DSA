#include <iostream>
#include <math.h>
using namespace std;


void counter(int n){
    if(n==0){
        return ;
    }
    cout<<n;
    counter(n-1);
}


int main(int argc, char const *argv[])
{   
    int n;
    cout<<"upto which no ";
    cin>>n;
  counter(n);
    return 0;
}
